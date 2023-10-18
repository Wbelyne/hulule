#include "lib.h"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
     if (!dest || !src)
        return 0;
    while (*dest)
        dest++;
    if (*dest == '\0')
        ft_strncpy(dest, src, size);
    *dest = '\0';

}