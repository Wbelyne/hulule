#include "lib.h"

int ft_iterative_power(int nb, int power)
{
    int baisse = 0;
    int res = 1;
    if (power < 0)
		return (0);

    if (nb == 0 && power == 0)
        return 1;
    
    while(baisse++ < power)
        res *= nb;
    return(res);
}