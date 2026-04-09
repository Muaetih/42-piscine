#include <unistd.h>
#include "ft_putstr.h"

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}