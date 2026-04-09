#include "ft_strlen.h"

int     ft_strlen(char *str)
{
    int compt;

    compt = 0;
    while (*str != '\0')
    {
        compt++;
        str++;
    }
    return compt;
}