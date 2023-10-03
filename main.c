#include "lib.h"

int main(int argc, char *argv[])
{
    int a;
    int b;

    a = 1;
    b = 2;
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);
    ft_swap(&a,&b);
    ft_putchar('\n');
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);
    return 0;
}