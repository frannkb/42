void    ft_putchar_fd(char c, int fd);

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || (ft_isdigit(c)));
}

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
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

void *ft_memset(void *str, int c, size_t len)
{
    unsigned char *pointer = str;
    size_t i;

    i = 0;
    while(i < len)
        pointer[i] = (unsigned char)c;
    return (str);
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

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *source;
    char    *destination;

    source = (char *)src;
    destination = (char *)dst;
    if(!dst && !src)
        return (dst);
    while(n--)
        *destination++ = *source++;
    return (dst);
}

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    char    *tmp;
    char    *dest;

    tmp = (char *)src;
    dest = (char *)dst;
    if(tmp < dest)
    {
        while (n--)
            dest[n] = tmp[n];
    }
    else
        ft_memcpy(dest, tmp, n);
    return (dst);

}

    static  int ft_isspace(int c)
    {
        if (c == '\v' || c == '\n' || c == '\t' ||
		    c == '\r' || c == '\f' || c == ' ')
		    return (1);
	    return (0);
    }

int ft_atoi(const char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (ft_isspace(*str))
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while (ft_isdigit(*str))
        result = result * 10 + (*(str++) - 48);
    return (result * sign);
}


// SECOND PART >> fd = File Descriptor
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int num;

    num = n;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        num = (unsigned int)(n * -1);
    }
    if (n > 9)
        ft_putnbr_fd(num / 10, fd);
    ft_putchar_fd((char)(num % 10 + '0'), fd);
}

void    ft_putstr_fd(char *s, int fd)
{
    // int i;

    // i = 0;
    // while (s[i] != '\0')
    // {
    //     ft_putchar_fd(s[i], fd);
    //     i++;
    // }
    if(s)
        write(fd, s, ft_strlen(s));
}

void    ft_putendl_fd(char *s, int fd)
{
    if(!s)
        return ;
    if(s)
    {
        write(fd, s, ft_strlen(s));
        write(fd, "\n", 1);
    }
}
