/*
** EPITECH PROJECT, 2018
** include functions
** File description:
** include functions
*/
#include <stdlib.h>
#include <stdio.h>

struct list{
    int *l_a;
    int len_a;
    int *l_b;
    int len_b;
    int ac;
    int sort_l_b;
    int nb_smaller;
    int pos_smaller;
};

typedef struct list list;

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int check_number(char *str);
int my_getnbr(char const *str);
void my_isneg(int n);
int my_is_prime(int nb);
void my_putchar(char c);
int nb_special(long nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
int low(char c);
int up(char c);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_str_isalpha(char *str);
char *my_str_islower(char *str);
char *my_str_isnum(char *str);
char *my_str_isprintable(char *str);
char *my_str_isupper(char *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int nb);
char *my_strstr(char *str, char *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void *infin_add(char *nb1, char *nb2);
int my_str_taller(char const *s1, char const *s2);
char *big_nb(char *nb1, char *nb2);
char *small_nb(char *nb1, char *nb2);
int my_str_is_equal(char *str1, char *str2);
void my_put_infinadd(int ret, char *nb, int type);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
void disp_inf_list_a(list *lis);
void disp_inf_list_b(list *lis);
void sa(list *lis);
void sb(list *lis);
void sc(list *lis);
void pa(list *lis);
void pb(list *lis);
void ra(list *lis);
void rb(list *lis);
void rr(list *lis);
void rra(list *lis);
void rrb(list *lis);
void rrr(list *lis);
void distrib(list *lis);
void distrib_sawp(list *lis);
void distrib_second_list(list *lis);
int sort(list *lis);
int sort_two(list *lis);
int sort_three(list *lis);
int sort_four(list *lis);
void distrib_two(list *lis);
void distrib_three(list *lis);
void find_smaller_l_a(list *lis);