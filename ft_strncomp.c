#include "lib.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
   if (!s1 || !s2)
        return 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
