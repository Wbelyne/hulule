#include "lib.h"

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if (!((*str >= 'A' && *str <= 'Z')||(*str >= 'a' && *str <= 'z')))
            return (0);
        str++;
    }
    return (1);
}