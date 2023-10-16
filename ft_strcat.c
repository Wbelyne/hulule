#include "lib.h"

char *ft_strcat(char *dest, char *src)
{
    if (!dest || !src)
        return 0;
    while (*dest)
        dest++;
    if (*dest == '\0')
        ft_strcpy(dest, src);
}