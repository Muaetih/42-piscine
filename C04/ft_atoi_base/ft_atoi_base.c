#include <stdio.h>
int ft_check_base(char *base)
{
    int i;
    int j;

    i = 0;
    j= 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        j = 0;
        while (j < i)
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;    
    }
    if (i <= 1)
        return 0;
    return i;
}

int     ft_atoi_base(char *str, char *base)
{
    int num;
    int sign;
    int i;
    int len;

    num = 0;
    sign = 1;
    i = 0;
    len = ft_check_base(base);
    if (len == 0)
        return 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    while (*str)
    {
        i = 0;
        while (base[i] && base[i] != *str)
            i++;
        if (base[i] == '\0')
            break;
        num = num * len + i;
        str++;
    }
    return (num*sign);
}
