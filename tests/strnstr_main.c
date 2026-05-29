#include <stdio.h>

int main(void)
{
    // Teste 1: Agulha bem no início, limite folgado.
    printf("Teste 1: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15)); 
    // Output esperado: "lorem ipsum dolor sit amet"

    // Teste 2: Agulha no meio, limite suficiente para encontrá-la inteira.
    printf("Teste 2: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15)); 
    // Output esperado: "ipsum dolor sit amet"

    // Teste 3: Múltiplas ocorrências da agulha. Deve parar e retornar na primeira.
    printf("Teste 3: %s\n", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35)); 
    // Output esperado: "ipsum dolor sit lorem ipsum dolor"

    // Teste 4: Agulha vazia. O manual diz para retornar a string 'big' original.
    printf("Teste 4: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10)); 
    // Output esperado: "lorem ipsum dolor sit amet"

    // Teste 5: Agulha não existe (palavra quase igual, cuidado com o "m" a mais).
    printf("Teste 5: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30)); 
    // Output esperado: (null)

    // Teste 6: Agulha é apenas um pedaço de uma palavra ("dol" dentro de "dolor").
    printf("Teste 6: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)); 
    // Output esperado: "dolor sit amet"

    // Teste 7: Agulha completamente inexistente no palheiro.
    printf("Teste 7: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30)); 
    // Output esperado: (null)

    // Teste 8: Agulha existe, mas está BEM DEPOIS do limite (limite 10 para na letra 'm' de ipsum).
    printf("Teste 8: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10)); 
    // Output esperado: (null)

    // Teste 9: A PEGADINHA. A agulha começa DENTRO do limite, mas termina FORA.
    // "dolor" começa no índice 12. O limite é 15. Ele vai comparar 'd', 'o', 'l', e aí o limite len corta a busca antes de achar o 'o' e 'r'.
    printf("Teste 9: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)); 
    // Output esperado: (null)

    // Teste 10: O limite de busca é literalmente zero.
    printf("Teste 10: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)); 
    // Output esperado: (null)

    return (0);
}