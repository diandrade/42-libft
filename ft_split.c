/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:02:22 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/12 11:17:41 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     count_tokens(char *s, char c)
{
    int is_inside_token;
    size_t  tokens;
    size_t  i;

    i = 0;
    tokens = 0;
    while(s[i])
    {
        is_inside_token = 0;
        while(s[i] == c && s[i])
        {
            i++;
        }

        while(s[i] != c && s[i])
        {
            is_inside_token = 1;
            i++;
        }

        if (is_inside_token == 1)
        {
            tokens++;
        }
    }
    return tokens;
}

char    *create_ptr(char *s, char c, int token)
{
    char    *ptr;
    size_t  tokens;
    size_t  start;
    size_t  i;
    size_t  j;

    i = 0;
    tokens = 0;
    while(s[i])
    {
        while(s[i] == c && s[i])
        {
            i++;
        }

        if(s[i] != '\0')
        {
           tokens++; 
        }

        if(tokens == (size_t) token)
        {
            start = i;
            while(s[i] != c && s[i])
            {
                i++;
            }

            ptr = malloc(sizeof(char) * (i - start + 1));

            j = 0;
            while(s[start] != c && s[start])
            {
                ptr[j++] = s[start++];
            }
            
            ptr[j] = '\0';
            return ptr;
        }

        while(s[i] != c && s[i])
        {
            i++;
        }
    }
    return NULL;
}

char    **ft_split(char const *s, char c)
{
    char    **v_ptr;
    char    *s_ptr;
    size_t  tokens;

    s_ptr = (char *) s;
    tokens = count_tokens(s_ptr, c);
    v_ptr = malloc(sizeof(char  *) * (tokens + 1));

    if (v_ptr == NULL)
    {
        return NULL;
    }

    v_ptr[tokens] = NULL;

    while(tokens > 0)
    {
        v_ptr[tokens - 1] = create_ptr(s_ptr, c, tokens);
        tokens--;
    }

    return v_ptr;
}