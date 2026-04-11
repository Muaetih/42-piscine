int ft_strlen(char *src)
{
    int len;

    len = 0;
    while (*src)
    {
        len++;
        src++;
    }
    return len;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int len_dest;
    int len_src;
    int space;

    len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    space = size - len_dest - 1;
    if (size <= len_dest)
        return (size + len_src);
    while (*dest)
        dest++;
    while(space > 0 && *src)
    {
        *dest = *src;
        dest++;
        src++;
        space--;
    }
    *dest = '\0';
    return (len_dest + len_src);
}