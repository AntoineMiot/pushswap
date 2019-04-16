/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** distrib
*/
#include "include/my.h"

void distrib_four(list *lis)
{
    while (lis ->len_b !=0) {
        pa(lis);
        if (lis->len_b == 0)
            my_putstr("pa\n");
        else
            my_putstr("pa ");
    }
}

void find_smaller_l_a(list *lis)
{
    lis->nb_smaller = lis->l_a[0];

    for (int i = 0; i != lis->len_a; i++) {
        if (lis->l_a[i] < lis->nb_smaller) {
            lis->pos_smaller = i;
            lis->nb_smaller = lis->l_a[i];
        }
    }
}

void distrib_two(list *lis)
{
    while (lis->len_a != 2) {
        find_smaller_l_a(lis);
        if (lis->l_a[0] == lis->nb_smaller) {
            pb(lis);
            my_putstr("pb ");
        } else if (lis->l_a[1] == lis->nb_smaller) {
            sa(lis);
            my_putstr("sa ");
        } else {
            rra(lis);
            my_putstr("rra ");
        }
    }
    if (lis->l_a[0] > lis->l_a[1]) {
            sa(lis);
            my_putstr("sa ");
    }
}

void distrib(list *lis)
{
    distrib_two(lis);
    distrib_four(lis);
}