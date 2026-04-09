#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_strlen.h"

int main(void)
{
    printf("ft_strlen(\"Hello\")     = %d | strlen = %lu\n", ft_strlen("Hello"), strlen("Hello"));
    printf("ft_strlen(\"\")          = %d | strlen = %lu\n", ft_strlen(""), strlen(""));
    printf("ft_strlen(\"42 Paris\")  = %d | strlen = %lu\n", ft_strlen("42 Paris"), strlen("42 Paris"));
    printf("ft_strlen(\"a\")         = %d | strlen = %lu\n", ft_strlen("a"), strlen("a"));
    return (0);
}