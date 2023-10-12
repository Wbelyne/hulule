#include "lib.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

    unsigned int len;
    len = ft_strlen(src);
    if (len == 0)
        return 0;
    while(*src && --size)
    {
       *dest = *src;
       src++;
        dest++;
    }
    *dest = '\0';
    return (len);
}