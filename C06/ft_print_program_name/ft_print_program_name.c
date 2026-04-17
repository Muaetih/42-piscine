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

int main(int argc, char **argv)
{
    (void)argc;
    int len;
    char new_line;

    new_line = '\n';
    len = ft_strlen(argv[0]);
    write(1,argv[0],len);
    write(1,&new_line,1);
    return 0;
}