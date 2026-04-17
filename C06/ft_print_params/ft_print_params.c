#include <unistd.h>
int ft_strlen(char *argv)
{
    int len;

    len =   0;
    while (*argv)
    {
        len++;
        argv++;
    }
    return  (len);
}

int main(int argc, char **argv)
{
    int len;
    char    new_line;
    int i;

    new_line    =   '\n';
    i   =   1;
    while (i    <   argc)
    {
        len =   ft_strlen(argv[i]);
        write   (1, argv[i],    len);
        write   (1, &new_line,  1);
        i++;
    }
    return  (0);
}