#include "lib.h"

void print_numbers (char a, char b)
{
            ft_putchar(a / 10 + 48);
            ft_putchar(a % 10 + 48);
            ft_putchar(' ');
            ft_putchar(b / 10 + 48);
            ft_putchar(b % 10 + 48);
            if(!(a == 98 && b == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
}
void ft_print_comb2(void)
{
    char a;
    char b;

    a = 0;
    b = 0;

    while(a < 100)
    {
        b = a + 1;
        while(b < 100)
        {
            print_numbers(a,b);
            b++;
        }
        a++;
    }
}

