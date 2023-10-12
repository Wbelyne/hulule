#include "lib.h"
int num(char c)
{
    if (!(c >= '0' && c <= '9'))
            return (0);
        else
            return (1);
}
int alpha(char c)
{
     if (!((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z')))
            return (0);
     else
        return (1);
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    if (!str)
        return NULL;
    while (str[i])
    {
        if (alpha(str[i]) && !alpha(str[i-1]) && !num(str[i-1]))
            str[i] -= 32;
        i++;
    }
    
    return (str);
}