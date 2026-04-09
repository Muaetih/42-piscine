#include "ft_print_alphabet.h"
#include <string.h>

int main(void)
{
    printf("Test 1: %d | %lu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("Test 2: %d | %lu\n", ft_strlen(""), strlen(""));
	printf("Test 3: %d | %lu\n", ft_strlen("A"), strlen("A"));
	printf("Test 4: %d | %lu\n", ft_strlen("42 Paris"), strlen("42 Paris"));
	printf("Test 5: %d | %lu\n", ft_strlen("   "), strlen("   "));
    return 0;
}