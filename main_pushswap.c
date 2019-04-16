/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** main_pushswap
*/
#include "include/my.h"

int sort(list *lis)
{
    int index1 = 0;
    int index2 = 1;
    int count = 0;

    while (index2 != lis->ac - 1) {
        if (lis->l_a[index1] > lis->l_a[index2]) {
            return (0);
        }
        index2++;
        index1++;
    }
    return (73);
}

void write_fisrt_list(int ac, char **av, list *lis)
{
    lis->len_a = ac - 1;
    lis->len_b = (ac - 1) - lis->len_a;
    lis->l_a = malloc(sizeof(int *) * ac);
    lis->l_b = malloc(sizeof(int *) * ac);
    for (int i = 0; i != lis->len_a; i++) {
        lis->l_a[i] = my_getnbr(av[i + 1]);
    }
}

int main(int ac, char **av)
{
    struct list lis;
    int counte_space = 0;

    lis.ac = ac;
    lis.sort_l_b = 0;
    if (ac == 1) {
        my_putchar('\n');
        return (0);
    }
    write_fisrt_list(ac, av, &lis);
    if (sort(&lis) == 73) {
        my_putchar('\n');
        return (0);
    }
    if (lis.len_a > 3000)
        return (0);
    else
        distrib(&lis);
    return (0);
}