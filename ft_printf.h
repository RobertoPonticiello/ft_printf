#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);

#endif