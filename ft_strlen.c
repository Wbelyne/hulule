#include "lib.h"

int ft_strlen(char *str)
{
    int len;
    len = 0;

    while (*str++ != 0)
        len++;
    ft_putnbr(len);
}