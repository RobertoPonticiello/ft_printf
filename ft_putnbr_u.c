#include "ft_printf.h"

int	ft_putnbr_u(va_list x)
{
	unsigned int	n;

	n = va_arg(x, unsigned int);
	return (ft_print_int_recursive(n));
}