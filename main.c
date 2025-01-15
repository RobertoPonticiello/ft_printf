#include "ft_printf.h"

int main(void)
{
    char    *str = "Così parlò Zarathustra";
    char    c = 'R';
    int n = 42;
    //float   f = 0.42;
    
    printf("Ciao come stai \n%d\n%s\n%c\n", n, str, c);
    //ft_printf("Ciao come stai \n%d\n%s\n%c\n", n, str, c);
    return (0);
}