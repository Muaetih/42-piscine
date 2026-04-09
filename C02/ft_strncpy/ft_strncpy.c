#include <unistd.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *tmp;

    tmp = dest;
    while (n > 0 && *src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
        n--;
    }
    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }
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

    ft_strncpy(dest1, "Hi", 10);
    ft_putstr(dest1);

    ft_strncpy(dest2, "Hello 42 !", 3);
    dest2[3] = '\0';
    ft_putstr(dest2);

    return (0);
}