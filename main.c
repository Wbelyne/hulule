#include "lib.h"

int main(int argc, char *argv[])
{
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};

	printf("9,8,7,6,5,4,3,2,1,0:");
	ft_rev_int_tab(tab, 10);
	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
}