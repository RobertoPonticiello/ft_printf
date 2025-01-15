#include "ft_printf.h"

int    ft_check(char c, va_list x)
{
    int count;

    count = 0;
    if (c == 'c')
        count = ft_putchar(x);
    if (c == 's')
        count = ft_putstr(x);
    if (c == 'p')
        count = ft_puthex(x);
    if (c == 'd')
        count = ft_putnbr(x);
    if (c == 'i')
        count = ft_putnbr(x);
    if (c == 'u')
        count = ft_putnbr(x); //senza segno
    if (c == 'x')
        /* code */
    if (c == 'X')
        /* code */
    if (c == '%')
        count = ft_putchar('%');
    return (count);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);
    size_t  i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            count = ft_check(str[i], args);
            i++;
        }
        else
        {
            ft_putchar(str[i]);
            i++;
        }
    }
    va_end(args);
    return(i);
}