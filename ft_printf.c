#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
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