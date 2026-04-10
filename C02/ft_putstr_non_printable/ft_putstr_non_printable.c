void    ft_putstr_non_printable(char *str)
{
    char high;
    char low;

    while (*str)
    {
        if (*str >= ' ' && *str <= '~')
            write(1,str,1);
        else
        {
            write(1,"\\",1);
            high =*str / 16;
            low =*str % 16;
            if (high >= 10)
                high = 'a' + (high - 10);
            else
                high = '0' + high;
            if (low >= 10)
                low = 'a' + (low - 10);
            else
                low = '0' + low;
            write(1,&high,1);
            write(1,&low,1);
        }
        str++;
    }
}