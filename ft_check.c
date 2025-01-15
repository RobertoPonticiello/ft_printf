#include "ft_printf.h"

void    ft_check(char c)
{
    if (c == 'c')
        ft_putchar(c);
    if (c == 's')
        ft_putstr();
    if (c == 'p')
        ft_puthex();
    if (c == 'd')
        ft_putnbr();
    if (c == 'i')
        ft_putnbr();
    if (c == 'u')
        ft_putnbr(); //senza segno
    if (c == 'x')
        /* code */
    if (c == 'X')
        /* code */
    if (c == '%')
        ft_putchar('%');
    return (void);
}