#include "ft_printf.h"

int ft_puthex_dw(va_list x)
{
    unsigned int n;
    char *hex = "0123456789abcdef";
    int count;

    n = (unsigned int)va_arg(x, int);
    count = 0;
    if (n >= 16)
    {
        ft_puthex_dw(n / 16);
        count += 1;
    }
    count += ft_putchar(hex[n % 16]);
    return (count);
}

int ft_puthex_up(va_list x)
{
    unsigned int n;
    char *hex = "0123456789ABCDEF";
    int count;

    n = (unsigned int)va_arg(x, int);
    count = 0;
    if (n >= 16)
    {
        ft_puthex_up(n / 16);
        count += 1;
    }
    count += ft_putchar(hex[n % 16]);
    return (count);
}