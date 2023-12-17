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

    // Si i*i dépasse nb, cela signifie qu'il n'y a pas de racine carrée entière pour nb.
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

int main(int argc, char const *argv[])
{
    
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
    return 0;
}
