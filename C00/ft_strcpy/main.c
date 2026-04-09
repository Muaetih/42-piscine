#include <stdio.h>
#include <string.h>
#include "ft_strcpy.h"

int	main(void)
{
	char d1[50];
	char d2[50];

	ft_strcpy(d1, "Hello");
	strcpy(d2, "Hello");
	printf("Test 1: %s | %s\n", d1, d2);

	ft_strcpy(d1, "");
	strcpy(d2, "");
	printf("Test 2: %s | %s\n", d1, d2);

	ft_strcpy(d1, "42 Paris");
	strcpy(d2, "42 Paris");
	printf("Test 3: %s | %s\n", d1, d2);

	ft_strcpy(d1, "A");
	strcpy(d2, "A");
	printf("Test 4: %s | %s\n", d1, d2);

	return (0);
}