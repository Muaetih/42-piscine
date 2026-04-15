#include <stdio.h>
int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i * i <= nb)
        i++;
    return (i - 1);
}

int ft_is_prime(int nb)
{
    int sqrt;
    int i;

    sqrt = ft_sqrt(nb);
    i = 2;
    if (nb <= 0)
        return 0;
    if (nb == 1)
        return 0;
    while (i <= sqrt)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}
