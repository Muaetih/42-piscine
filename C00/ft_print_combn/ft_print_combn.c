#include <unistd.h>
#include "ft_print_combn.h"

void recurs(int n, int index, int min, int *tab)
{
    int i;
    char c;

    i = 0;
    if (n == index)
    {
        while (i < n)
        {
            c = '0' + tab[i];
            write(1,&c,1);
            i++;
        }
        i = 0;
        while (i < n && tab[i] == 10 - n + i)
        {
            i++;
        }
        if (i != n)
        {
            write(1,", ",2);
        }
    }
    else 
    {
        i = min;

        while (i <= 9-(n - 1 - index))
        {
            tab[index] = i;
            recurs(n, index + 1, i + 1, tab);
            i++;
        }
    }
}


void ft_print_combn(int n)
{
    int tab[n];

    if (n > 0 && n < 10)
    {
        recurs(n, 0, 0, tab);
    }
}
