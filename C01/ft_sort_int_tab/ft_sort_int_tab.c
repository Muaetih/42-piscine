#include "ft_sort_int_tab.h"

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    j = 0;
    while (i < size -1)
    {
        j = 0;
        while (j < size - 2 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}