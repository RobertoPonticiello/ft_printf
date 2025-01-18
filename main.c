#include "ft_printf.h"

int main(void)
{
    char    *str = "Così parlò Zarathustra";
    char    c = 'R';
    int n = 42;
    //float   f = 0.42;
    
    printf("NUMERO CARATTERI PRINTF: %d\n", printf("Ciao come stai \n%d\n%s\n%c\n", n, str, c));
    printf("NUMERO CARATTERI FT: %d\n", ft_printf("Ciao come stai \n%d\n%s\n%c\n", n, str, c));
    return (0);
}