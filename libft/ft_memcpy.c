void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char *source = src;
    unsigned char *destination = dest;

    while (n--)
        *destination++ = *source++;
    return (dest);
}