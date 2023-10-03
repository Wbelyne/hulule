#include "lib.h"

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;
    int tmp2;
    tmp = b;
    tmp2 = a;
    *a = *a / *b;
    *b = tmp2 % *b; 
}