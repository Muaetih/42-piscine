#include <stdio.h>

int     ft_atoi(char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return (num*sign);
}

int main(void)
{
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("-42"));
    printf("%d\n", ft_atoi("   ---+--+1234ab567"));
    printf("%d\n", ft_atoi("  +42"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("2147483647"));
    return (0);
}