#include <stdio.h>
#include <string.h>
#include "ft_strcmp.h"

int	main(void)
{
	printf("Test 1: %d | %d\n", ft_strcmp("abc", "abc"), strcmp("abc", "abc"));
	printf("Test 2: %d | %d\n", ft_strcmp("abc", "abd"), strcmp("abc", "abd"));
	printf("Test 3: %d | %d\n", ft_strcmp("b", "a"), strcmp("b", "a"));
	printf("Test 4: %d | %d\n", ft_strcmp("ab", "abc"), strcmp("ab", "abc"));
	printf("Test 5: %d | %d\n", ft_strcmp("", ""), strcmp("", ""));
	printf("Test 6: %d | %d\n", ft_strcmp("", "a"), strcmp("", "a"));
	printf("Test 7: %d | %d\n", ft_strcmp("a", ""), strcmp("a", ""));
	return (0);
}