
int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int ft_isalnum(int c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else 
        return (0);
}

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

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *pointer = b;
    size_t i;

    i = 0;
    while(i < len)
        pointer[i] = (unsigned char)c;
    return (b);
}