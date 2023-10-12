#include "lib.h"
#include "string.h"


int		main()
{
	char c[] = "AbCdEfG-Yz";
	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strlowcase(c));
	ft_putstr(":");
	ft_putstr(c);
}