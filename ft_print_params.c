#include "lib.h"

int main(int argc, char *argv[])
{
    int i = 1;
    while (argv[i])
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    
    return 0;
}
