#include "lib.h"

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    if (!dest || !src)
        return 0;
    while (*dest)
        dest++;
    if (*dest == '\0')
        ft_strncpy(dest, src, nb);
}