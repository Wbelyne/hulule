#include "lib.h"

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    i = 0;
    if (*to_find == 0)
        return (str);
    while (*str)
    {
       if (str[i] == to_find[0])
       {
        while (str[i] == to_find[i])
            i++;
         if (to_find[i] == '\0')
				return (str);
       }
       str++;
    }
    return (0);
}