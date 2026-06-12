int	main(void)
{
	// Test 1 - Deve remover espaços do início e fim, mas manter os internos
	// Output desejado: "lorem \n ipsum \t dolor \n sit \t amet"
	char s1_1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	printf("Test 1 - Set: \" \"\n");
	printf("Output: \"%s\"\n\n", ft_strtrim(s1_1, " "));

	// Test 2 - Deve remover 't' e 'e' do início e fim
	// Output desejado: "lorem ipsum dolor sit am"
	char s1_2[] = "lorem ipsum dolor sit amet";
	printf("Test 2 - Set: \"te\"\n");
	printf("Output: \"%s\"\n\n", ft_strtrim(s1_2, "te"));

	// Test 3 - Deve remover 'l' e espaço do início e fim
	// Output desejado: "orem ipsum dolor sit amet"
	char s1_3[] = " lorem ipsum dolor sit amet";
	printf("Test 3 - Set: \"l \"\n");
	printf("Output: \"%s\"\n\n", ft_strtrim(s1_3, "l "));

	// Test 4 - Deve remover 't', 'e', 'l' do início e fim
	// Output desejado: "orem ipsum dolor sit am"
	char s1_4[] = "lorem ipsum dolor sit amet";
	printf("Test 4 - Set: \"tel\"\n");
	printf("Output: \"%s\"\n\n", ft_strtrim(s1_4, "tel"));

	// Test 5 - String contém apenas espaços
	// Output desejado: "" (string vazia)
	char s1_5[] = "          ";
	printf("Test 5 - Set: \" \"\n");
	printf("Output: \"%s\"\n\n", ft_strtrim(s1_5, " "));

	return (0);
}