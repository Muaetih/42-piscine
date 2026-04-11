char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *tmp;
    int i;

    tmp = dest;
    i = 0;
    while (*dest)
        dest++;
    while (i < nb && *src)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return tmp;
}