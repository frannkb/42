char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
        i++;
    if (s[i] == c)
        return ((char *)&s[i]);
    return ((char *)s);
}
