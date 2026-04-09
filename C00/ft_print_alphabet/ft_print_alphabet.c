#include "ft_print_alphabet.h"
#include <unistd.h>

void ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        write(1,&c,1);
        c++;
    }
}

void ft_print_reverse_alphabet(void)
{
    char c;

    c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}