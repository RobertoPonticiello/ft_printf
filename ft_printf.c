#include "ft_printf.h"

void    ft_check(char c, va_list x)
{
    if (c == 'c')
        ft_putchar(x);
    if (c == 's')
        ft_putstr(x);
    if (c == 'p')
        ft_puthex(x);
    if (c == 'd')
        ft_putnbr(x);
    if (c == 'i')
        ft_putnbr(x);
    if (c == 'u')
        ft_putnbr(x); //senza segno
    if (c == 'x')
        /* code */
    if (c == 'X')
        /* code */
    if (c == '%')
        ft_putchar('%');
    return (void);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);
    size_t  i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            ft_check(str[i]);
            i++;
        }
        else
        {
            ft_putchar(str[i]);
            i++;
        }
    }
    
}