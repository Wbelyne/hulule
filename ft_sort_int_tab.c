#include "lib.h"

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        int j = i + 1;
        while (j < size)
        {
            if(tab[i] > tab[j])
                // ft_swap(&tab[j], &tab[i]);
                ft_swap(tab + j, tab + i);
            j++;
        }
      i++;
    }   
}   