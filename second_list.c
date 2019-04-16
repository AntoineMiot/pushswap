/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** pa pb
*/
#include "include/my.h"

void pb(list *lis)
{
    int *list_temp = malloc(sizeof(int *) * lis->ac);

    list_temp = lis->l_b;
    if (lis->len_b == 0) {
        lis->l_b[0] = lis->l_a[0];
        lis->l_a = lis->l_a + 1;
        lis->len_b = lis->len_b + 1;
        lis->len_a = lis->len_a - 1;
    } else {
        for (int i = lis->len_b; i != 0; i--)
            lis->l_b[i] = list_temp[i - 1];
        lis->l_b[0] = lis->l_a[0];
        lis->l_a = lis->l_a + 1;
        lis->len_b = lis->len_b + 1;
        lis->len_a = lis->len_a - 1;
    }
}

void pa(list *lis)
{
    int *list_temp = malloc(sizeof(int *) * lis->ac);

    list_temp = lis->l_a;
    if (lis->len_a == 0) {
        lis->l_a[0] = lis->l_b[0];
        lis->l_a = lis->l_a + 1;
        lis->len_a = lis->len_a + 1;
        lis->len_b = lis->len_b - 1;
    } else {
        for (int i = lis->len_a; i != 0; i--)
            lis->l_a[i] = list_temp[i - 1];
        lis->l_a[0] = lis->l_b[0];
        lis->l_b = lis->l_b + 1;
        lis->len_b = lis->len_b - 1;
        lis->len_a = lis->len_a + 1;
    }
}

void rra(list *lis)
{
    int *list_temp = malloc(sizeof(int *) * lis->len_a);
    int tempo = lis->l_a[lis->len_a - 1];

    list_temp = lis->l_a;
    for (int i = lis->len_a; i != 1; i--)
        lis->l_a[i - 1] = list_temp[i - 2];
    lis->l_a[0] = tempo;
}

void sa(list *lis)
{
    int tempo = lis->l_a[0];

    lis->l_a[0] = lis->l_a[1];
    lis->l_a[1] = tempo;
}