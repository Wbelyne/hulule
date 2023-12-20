#include "lib.h"

// int   ft_sqrt(int nb)
// {
//     int i = 0;

//    if (nb < 1)
//         return 0;
//     while (i * i <= nb)
//     {
//         if (i * i == nb)
//             return (i);
//        i++;
//     }
//     return 0;
// }

int   ft_recursive_sqrt(int nb,int i)
{
    if (i * i == nb) {
        return i;
    }

    if (i * i > nb) {
        return 0;
    }

        return ft_recursive_sqrt(nb, i + 1);
}  
int   ft_sqrt(int nb)
{
   
   if (nb < 1)
        return 0;
   
   return ft_recursive_sqrt(nb, 1);
}
