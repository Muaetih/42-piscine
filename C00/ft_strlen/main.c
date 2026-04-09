#include <stdio.h>
#include <string.h>
#include "ft_strlen.h"

int	main(void)
{
	printf("Test 1: %d | %lu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("Test 2: %d | %lu\n", ft_strlen(""), strlen(""));
	printf("Test 3: %d | %lu\n", ft_strlen("A"), strlen("A"));
	printf("Test 4: %d | %lu\n", ft_strlen("42 Paris"), strlen("42 Paris"));
	return (0);
}