#include "ft_atoi_itoa.h"

//converti une string en int
int ft_atoi(char *str)
{
    int i;
    int resultat;
    int signe;

    signe = 1;
    resultat = 0;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;

    if (str[i] == '-')
    {
        signe = -1;
        i++;
    }
     
    while (str[i] >= '0' && str[i] <= '9')
    {
        resultat = resultat * 10 + (str[i] - '0');
        i++;
    }
    return (resultat * signe);
}