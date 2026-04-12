#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

int ft_check_base(char *base)
{
    int i;
    int j;

    i = 0;
    j= 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return 0;
        j = 0;
        while (j < i)
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;    
    }
    return i;
}

int ft_strlen_base(char *base)
{
    int len;

    len = ft_check_base(base);
    if (len <= 1)
        return 0;
    return len;
}

void    ft_putnbr_base(int nbr, char *base)
{
    int len;
    long n;

    len = ft_strlen_base(base);
    if (len == 0)
        return;
    n = (long)nbr;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if ( n >= len)
    {
        ft_putnbr_base((int)(n / len), base);
        ft_putnbr_base((int)(n % len), base);
    }
    else
        ft_putchar(base[n % len]);
}
