#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    char *tmp;
    int is_start;

    tmp = str;
    is_start = 1;
    while (*str)
    {
        if(!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9')))
            is_start = 1;

        else if (is_start == 1)
        {
            if (*str >= 'a' && *str <= 'z')
                *str -= 32;
            is_start = 0;
        }
        else if (*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
    return (tmp);
}


void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str2[] = "hello world";
    char str3[] = "HELLO WORLD";
    char str4[] = "";

    ft_putstr(ft_strcapitalize(str1));
    ft_putstr(ft_strcapitalize(str2));
    ft_putstr(ft_strcapitalize(str3));
    ft_putstr(ft_strcapitalize(str4));

    return (0);
}