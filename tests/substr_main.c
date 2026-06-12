

#include "libft.h"

int main(void)
{
    char *original;
    char *result;

    // Test 1: Normal case
    original = "Hello, World!";
    result = ft_substr(original, 7, 5);
    printf("Test 1: ft_substr(\"Hello, World!\", 7, 5) = \"%s\"\n", result);
    free(result);

    // Test 2: Start at beginning
    original = "Testing";
    result = ft_substr(original, 0, 4);
    printf("Test 2: ft_substr(\"Testing\", 0, 4) = \"%s\"\n", result);
    free(result);

    // Test 3: Len bigger than remaining string
    original = "Short";
    result = ft_substr(original, 2, 10);
    printf("Test 3: ft_substr(\"Short\", 2, 10) = \"%s\"\n", result);
    free(result);

    // Test 4: Empty string
    original = "";
    result = ft_substr(original, 0, 5);
    printf("Test 4: ft_substr(\"\", 0, 5) = \"%s\"\n", result);
    free(result);

    return 0;
}