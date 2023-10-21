#include "lib.h"

int ft_atoi(char *str)
{
    
    int i = 0;
    int sign = 1;
    if (*str == 0)
        return (0);
    while (*str)
    {
        if (*str == '-')
            sign = - 1;
        if (*str == '+')
            sign = 1;
        if (*str >= '0' && *str <= '9')
            i = i * 10 + (*str - '0');
        str++;
    }
     ft_putnbr(i * sign);
    return (i * sign);
}