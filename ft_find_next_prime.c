#include "lib.h"



int ft_find_next_prime(int nb)
{
    int i = nb;
     if (nb < 2)
        return 0;
    while (!ft_is_prime(i))
        i++;
    return i;
    
}
