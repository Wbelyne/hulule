#include "lib.h"

void ft_rev_int_tab(int *tab, int size)
{
    int debut = 0;
    int fin = size - 1;
    while (debut < fin)
    {
        int tmp;
        tmp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = tmp;
        debut++;
        fin--;
    }  
}