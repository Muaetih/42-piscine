#include <unistd.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    char *tmp;

    tmp = dest;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return (tmp);
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char dest1[50];
    char dest2[50];
    char dest3[50];
    char dest4[50];

    ft_strcpy(dest1, "Hello 42 !");
    strcpy(dest2, "Hello 42 !");
    ft_putstr(dest1);
    ft_putstr(dest2);

    ft_strcpy(dest3, "");
    strcpy(dest4, "");
    ft_putstr(dest3);
    ft_putstr(dest4);

    return (0);
}