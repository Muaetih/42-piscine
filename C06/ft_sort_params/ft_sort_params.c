#include <unistd.h>

int ft_strlen(char *argv)
{
    int len;

    len = 0;
    while (*argv)
    {
        len++;
        argv++;
    }
    return (len);
}

int ft_strcomp(char *s1, char *s2)
{
    while (*s1 || *s2)
    {
        if (*s1 < *s2 || *s1 > *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1);
}
int main(int argc, char **argv)
{
    char *swap;
    int i;
    char new_line;
    int len;

    i = 1;
    new_line = '\n';
    while (i < argc - 1)
    {
        if (ft_strcomp(argv[i], argv[i + 1]) > 0)
        {
            swap = argv[i];
            argv[i] = argv[i +1];
            argv[i + 1] = swap;
            i = 0;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        len = ft_strlen(argv[i]);
        write(1, argv[i],len);
        write (1, &new_line, 1);
        i++;
    }
    new_line = '\n';
    return (0);
}