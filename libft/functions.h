void    ft_putchar_fd(char c, int fd);

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

void    ft_bzero(void *s, size_t n)
{
    unsigned char *pointer = (unsigned char *)s;

    while (n > 0)
    {
        *pointer = 0;
        pointer++;
        n--;
    }
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
        return (c);
    }
    else
        return (c);
}

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        return (c);
    }
    else
        return (c);
}

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
        i++;
    if (s[i] == c)
        return ((char *)&s[i]);
    else
        return (NULL);
}

// SECOND PART
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}