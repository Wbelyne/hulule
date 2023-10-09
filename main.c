#include "lib.h"
#include "string.h"

int main(int argc, char *argv[])
{
    char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
	ft_strcpy(NULL, NULL);
}