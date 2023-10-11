#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_print_comb(void);
void ft_is_negative(int n);
void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a,int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
char *ft_strupcase(char *str);
#endif 


