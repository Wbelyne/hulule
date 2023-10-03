#include "lib.h"

int main(int argc, char *argv[])
{
int a;
int b;
int div;
int mod;
b = 2;
a = 25;

ft_div_mod(a, b, &div, &mod);
ft_putnbr(div);
ft_putchar('\n');
ft_putnbr(mod);

    return 0;
}