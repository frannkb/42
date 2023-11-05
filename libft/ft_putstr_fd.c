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
