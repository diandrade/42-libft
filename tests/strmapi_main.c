int		main(void)
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);
	if (!str)
		return (0);
	
	strcpy(str, "LoReM iPsUm");
	strmapi = ft_strmapi(str, &mapi);
	
	printf("%s\n", strmapi);
	
	if (strmapi == str)
		printf("\nA new string was not returned");
	if (strmapi[11] != '\0')
		printf("\nString is not null terminated");
	
	free(str);
	free(strmapi);
	return (0);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}