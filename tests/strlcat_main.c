/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:04:39 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/28 22:47:35 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    // --- TESTE 7 ---
    // CASO EXTREMO: Um array sem terminador nulo! Preenchido com 15 'r's.
    // Como limite é 5, a função vai procurar o \0 nos primeiros 5 caracteres e não vai achar.
    // Ela assume que o destino tem tamanho 5.
    char d7[15] = {'r','r','r','r','r','r','r','r','r','r','r','r','r','r','r'};
    printf("--- TESTE 7 ---\n");
    printf("Retorno: %zu\n", ft_strlcat(d7, "lorem ipsum dolor sit amet", 5));
    printf("Destino: %.15s\n\n", d7);
    // Retorno esperado: 31 (5 do limite + 26 do src)
    // Destino esperado: 15 'r's inalterados.
}