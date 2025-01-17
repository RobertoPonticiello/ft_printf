#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf(const char *str, ...);
int	ft_putchar(va_list x);
int	ft_putnbr(va_list x);
int ft_putnbr_u(va_list x);
int	ft_putstr(va_list x);
int ft_puthex_dw(va_list x);
int ft_puthex_up(va_list x);

#endif