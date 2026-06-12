

int main(void)
{
    char *result;

    // Test 1: Normal case with two strings
    result = ft_strjoin("Hello, ", "World!");
    printf("Test 1: ft_strjoin(\"Hello, \", \"World!\") = \"%s\"\n", result);
    free(result);

    // Test 2: First string empty
    result = ft_strjoin("", "Testing");
    printf("Test 2: ft_strjoin(\"\", \"Testing\") = \"%s\"\n", result);
    free(result);

    // Test 3: Second string empty
    result = ft_strjoin("Testing", "");
    printf("Test 3: ft_strjoin(\"Testing\", \"\") = \"%s\"\n", result);
    free(result);

    // Test 4: Both strings empty
    result = ft_strjoin("", "");
    printf("Test 4: ft_strjoin(\"\", \"\") = \"%s\"\n", result);
    free(result);

    // Test 5: Different strings
    result = ft_strjoin("The answer is ", "42");
    printf("Test 5: ft_strjoin(\"The answer is \", \"42\") = \"%s\"\n", result);
    free(result);

    return 0;
}