#include "ft_sort_int_tab.h"
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar('0' + n % 10);
}

int main(void)
{
    int tab1[] = {5, 3, 1, 4, 2};
    int tab2[] = {1, 2, 3, 4, 5};
    int i;

    ft_sort_int_tab(tab1, 5);
    i = 0;
    while (i < 5)
    {
        ft_putnbr(tab1[i++]);
        write(1, " ", 1);
    }
    write(1, "\n", 1);

    ft_sort_int_tab(tab2, 5);
    i = 0;
    while (i < 5)
    {
        ft_putnbr(tab2[i++]);
        write(1, " ", 1);
    }
    write(1, "\n", 1);

    return (0);
}