#include <stdio.h>
#include "ft_atoi_itoa.h"
#include <stdlib.h>

int main(void)
{
	printf("Test 2: %d | %d\n", ft_atoi("-42"), atoi("-42"));
	printf("Test 3: %d | %d\n", ft_atoi("   +123"), atoi("   +123"));
	printf("Test 6: %d | %d\n", ft_atoi("  -456abc"), atoi("  -456abc"));
	printf("Test 7: %d | %d\n", ft_atoi("abc123"), atoi("abc123"));
	printf("Test 9: %d | %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
    return 0;
}