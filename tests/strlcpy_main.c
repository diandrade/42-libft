#include <stdio.h>

int main(void)
{
    char dst[20];

    // --- TESTE 3 ---
    // Tentamos copiar "lorem ipsum" (11 letras), mas o limite é 3.
    // O strlcpy copia apenas 2 letras e usa o 3º espaço para o '\0'.
    printf("--- TESTE 3 ---\n");
    printf("Retorno: %zu\n", ft_strlcpy(dst, "lorem ipsum", 3));
    printf("Destino: %s\n\n", dst);
    // Output esperado: 
    // Retorno: 11
    // Destino: lo

    // --- TESTE 4 ---
    // Tentamos copiar 26 letras, mas o limite é 15.
    // O strlcpy copia 14 letras e coloca o '\0' na 15ª posição.
    printf("--- TESTE 4 ---\n");
    printf("Retorno: %zu\n", ft_strlcpy(dst, "lorem ipsum dolor sit amet", 15));
    printf("Destino: %s\n\n", dst);
    // Output esperado: 
    // Retorno: 26
    // Destino: lorem ipsum do

    dst[10] = '\0';

    // --- TESTE 5 ---
    // O limite é 0. O strlcpy não deve copiar NADA, nem mesmo o '\0'.
    // Mas ele ainda deve percorrer a string "src" para retornar o seu tamanho total.
    printf("--- TESTE 5 ---\n");
    printf("Retorno: %zu\n", ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0));
    printf("Destino: %s\n\n", dst);
    // Output esperado: 
    // Retorno: 26
    // Destino: XXXXXXXXXX

    return (0);
}