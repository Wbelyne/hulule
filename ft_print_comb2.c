#include "lib.h"

void print_sec(char c, char d)
{
    if(c <= '8')
    {
        d = c + 1;
        if(d <= '9')
        {
            ft_putchar(c);
            ft_putchar(d);
            if(!(d == '9' && c == '9'))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            d++;
        }
        c++;
    }
}
void ft_print_comb2(void)
{
    char a;
    char b;

    a = '0';
    b = '0';
    while(a <= '9')
    {
        while(b <= '8')
        {
            ft_putchar(a);
            ft_putchar(b);
            print_sec(a,b);
            b++;
        }
        a++;
    }
}
