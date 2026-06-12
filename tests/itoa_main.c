

int main(void)
{
    char *result;

    // Test 1: Positive number
    result = ft_itoa(42);
    printf("Test 1: ft_itoa(42) = \"%s\"\n", result);
    free(result);

    // Test 2: Negative number
    result = ft_itoa(-42);
    printf("Test 2: ft_itoa(-42) = \"%s\"\n", result);
    free(result);

    // Test 3: Zero
    result = ft_itoa(0);
    printf("Test 3: ft_itoa(0) = \"%s\"\n", result);
    free(result);

    // Test 4: Maximum int
    result = ft_itoa(2147483647);
    printf("Test 4: ft_itoa(2147483647) = \"%s\"\n", result);
    free(result);

    // Test 5: Minimum int
    result = ft_itoa(-2147483648);
    printf("Test 5: ft_itoa(-2147483648) = \"%s\"\n", result);
    free(result);

    // Test 6: Single digit positive
    result = ft_itoa(5);
    printf("Test 6: ft_itoa(5) = \"%s\"\n", result);
    free(result);

    // Test 7: Single digit negative
    result = ft_itoa(-9);
    printf("Test 7: ft_itoa(-9) = \"%s\"\n", result);
    free(result);

    // Test 8: Large number
    result = ft_itoa(123456789);
    printf("Test 8: ft_itoa(123456789) = \"%s\"\n", result);
    free(result);

    return (0);
}