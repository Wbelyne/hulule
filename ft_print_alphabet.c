#include "lib.h"

void ft_print_alphabet(void)
{
    char c;
    
    c = 'a';
    while(c <= 'z')
        {   
            ft_putchar(c);
            c++;
        }
}