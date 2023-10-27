void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *pointer = b;
    size_t i;

    i = 0;
    while(i < len)
        pointer[i] = (unsigned char)c;
    return (b);
}