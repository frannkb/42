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
