#include "lib.h"

int ft_atoi(char *str)
{

    int i = 0;
    int sign = 1;
    while (*str == ' ' || *str == ' ')
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        if (*str == '+')
            sign = 1;
        str++;
    }
    while (!str && *str >= '0' && *str <= '9')
    {
        i = i * 10 + (*str - '0');
        str++;
    }
    return (i * sign);
}