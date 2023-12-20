#include "lib.h"
int ft_is_prime(int nb)
{   
	int deb = 2;
    if (nb < 2)
        return 0;
	while (deb <= nb / deb)
	{
		if (nb % deb == 0)
			return 0;
		deb++;
	}
	return 1;	
}


int ft_find_next_prime(int nb)
{
    int i = nb;
     if (nb < 2)
        return 0;
    while (!ft_is_prime(i))
        i++;
    return i;
    
}
