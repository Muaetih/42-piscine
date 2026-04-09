#include <unistd.h>

void ft_print_numbers(void)
{
    int i;
    char chi;

    i = 0;
    chi = '0' + 0;
    while (i < 10)
    {
        write(1,&chi,1);
        i++;
        chi++;
    }
}