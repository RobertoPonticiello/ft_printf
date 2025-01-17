#include "ft_printf.h"

int ft_putnbr_u(va_list x)
{
    unsigned int    n;
    int count;

    count = 0;
	n = (unsigned int)va_arg(x, int);
    if (n >= 10)
    {
        ft_putnbr_u(n / 10);
    }
    count += ft_putchar(n % 10 + '0');
    return (count);
}