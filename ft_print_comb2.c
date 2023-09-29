#include "lib.h"

/*void print_sec(char c, char d)
{
    char e;
    char f;
    e = c;
    f = d + 1;
    while(c <= '8')
    {
        
        while(d <= '9')
        {
            ft_putchar(e);
            ft_putchar(f);
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
            ft_putchar(' ');
            print_sec(a,b);
            b++;
        }
        a++;
    }
}

void	print_numbers(char a, char b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_numbers(a, b);
			b++;
		}
		a++;
	}
}*/


