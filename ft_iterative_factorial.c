#include "lib.h"

int ft_iterative_factorial(int nb)
{
    int res = 1;

    while (nb != 1)
    {
        res *= nb;
        nb--;   
    };
    return (res);
}