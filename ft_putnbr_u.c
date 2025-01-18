#include "ft_printf.h"

int	ft_putnbr_u(va_list x)
{
	unsigned int	n;

	n = (unsigned int)va_arg(x, int);
	return (ft_print_int_recursive(n));
}