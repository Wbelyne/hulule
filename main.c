#include "lib.h"
#include "string.h"

int main(int argc, char *argv[])
{
 printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_lowercase("")?"OK":"Fail",
			ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("0123456789")?"OK":"Fail",
			!ft_str_is_lowercase(" ")?"OK":"Fail",
			!ft_str_is_lowercase("\\")?"OK":"Fail",
			!ft_str_is_lowercase("\n")?"OK":"Fail");
}