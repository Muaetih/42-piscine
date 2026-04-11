int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    int diff;

    i = 0;
    diff = 0;
    while (i != n && *s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            diff = *s1 - *s2;
            return diff;
        }
        s1++;
        s2++;
        i++;
    }
    if (*s1 != '\0' || *s2 != '\0')
    {
        diff = *s1 - *s2;
        return diff;
    }
    return 0;
}