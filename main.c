#include "lib.h"

int	main(void)
{
	int size = 100;
	char dest[] = "salut les gens ezifdhzeofhoàezhfoezhfoiuez";
	char src[] = "je suis la fonction strlcpy";
	printf("%s\n", dest);
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	return (0);
}