size_t  ft_strlen(const char *s)
{
    size_t lenght;

    lenght = 0;
    while (s[lenght] != '\0')
    {
        lenght++;
    }
    return (lenght);
}