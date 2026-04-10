unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int compt;
    char *tmp;

    tmp= src;
    compt = 0;
    while (*src)
    {
        compt++;
        src++;
    }
    if (size > 0)
    {   
        while (*tmp && size -1)
        {
            *dest = *tmp;
            dest++;
            tmp++;
            size--;
        }
        *dest = '\0';
    }
    return compt;
}
