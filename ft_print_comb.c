#include "lib.h"

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '/';

    while(++a <= '9')
    {
        b = a + 1;
        while(b <= '9')
        {
            
            c = b + 1;
            while(c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if(a != '7')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }   
                c++; 
            }
            b++;
        }
    }
}