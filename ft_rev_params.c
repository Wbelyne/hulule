#include "lib.h"

int main(int argc, char *argv[])
{
    int i = 1;
    while (argv[i])
         i++;
    i = i - 1;
    while(i > 0)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i--;
    }
    // if (!argv[i])
    //         {
    //             while (i != 1)
    //             {
    //                 ft_putstr(argv[i]);
    //                 i--;
    //             }
    //             return (0);
    //         }
    
    return 0;
}
