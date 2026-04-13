#include <stdio.h>
int ft_recurs(int i,int nb)
{
    if (nb > 0)
        return (ft_recurs(i * nb, nb - 1));
    return i;
}

int ft_recursive_factorial(int nb)
{
    if  (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    return ft_recurs(1, nb);
}

int main(void)
{
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(1));
    printf("%d\n", ft_recursive_factorial(5));
    printf("%d\n", ft_recursive_factorial(10));
    printf("%d\n", ft_recursive_factorial(-1));
    return (0);
}