

int	main(void)
{
	char	**result;
	int		i;

	printf("=== Test 1: ft_split(\"          \", ' ') ===\n");
	result = ft_split("          ", ' ');
	if (!result)
		printf("NULL\n");
	else
	{
		i = 0;
		while (result[i])
		{
			printf("\"%s\"", result[i]);
			if (result[i + 1])
				printf(", ");
			i++;
		}
		printf("\n");
	}

	printf("\n=== Test 2: ft_split(\"lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse\", ' ') ===\n");
	result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	if (!result)
		printf("NULL\n");
	else
	{
		i = 0;
		while (result[i])
		{
			printf("\"%s\"", result[i]);
			if (result[i + 1])
				printf(", ");
			i++;
		}
		printf("\n");
	}

	printf("\n=== Test 3: ft_split(\"   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   \", ' ') ===\n");
	result = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	if (!result)
		printf("NULL\n");
	else
	{
		i = 0;
		while (result[i])
		{
			printf("\"%s\"", result[i]);
			if (result[i + 1])
				printf(", ");
			i++;
		}
		printf("\n");
	}

	printf("\n=== Test 4: ft_split(\"lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.\", 'i') ===\n");
	result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	if (!result)
		printf("NULL\n");
	else
	{
		i = 0;
		while (result[i])
		{
			printf("\"%s\"", result[i]);
			if (result[i + 1])
				printf(", ");
			i++;
		}
		printf("\n");
	}

	printf("\n=== Test 5: ft_split(\"lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.\", 'z') ===\n");
	result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	if (!result)
		printf("NULL\n");
	else
	{
		i = 0;
		while (result[i])
		{
			printf("\"%s\"", result[i]);
			if (result[i + 1])
				printf(", ");
			i++;
		}
		printf("\n");
	}

	printf("\n=== Test 6: ft_split(\"\", 'z') ===\n");
	result = ft_split("", 'z');
	if (!result)
		printf("NULL\n");
	else if (!result[0])
		printf("ok\n");
	else
	{
		i = 0;
		while (result[i])
		{
			printf("\"%s\"", result[i]);
			if (result[i + 1])
				printf(", ");
			i++;
		}
		printf("\n");
	}

	return (0);
}