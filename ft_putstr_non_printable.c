#include "lib.h"
void	ft_puthex(char n)
{
	char			*base;
	unsigned char	c;

	c = n;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

int non_print(char c)
{
     if (c <= 31 || c == 127)
            return (1);
    else
        return (0);
}
void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while (str[i])
    {
        if(non_print(str[i]))
        {
            ft_puthex(str[i]);
        }
        else
            ft_putchar(str[i]);
       i++;
    }
    
}