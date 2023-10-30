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