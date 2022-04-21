/*
** EPITECH PROJECT, 2021
** push.c
** File description:
** push
*/

#include "../include/my.h"

void update(List *list, int nbr)
{
    Value *num = malloc(sizeof(*num));
    if (list == NULL || num == NULL)
        exit(EXIT_FAILURE);
    num->number = nbr;
    num->next = list->first;
    list->first = num;
}

void update_t(List *list, int nb)
{
    Value *num = malloc(sizeof(*num));
    /*if (list == NULL || num == NULL)
      exit(EXIT_FAILURE);*/
    num->number = nb;
    num->next = NULL;
    if (list->first == NULL) {
        list->first = num;
        list->end = num;
    } else {
        list->end->next = num;
        list->end = num;
    }
}

void clear(List *list)
{
    if (list == NULL)
        exit(EXIT_FAILURE);
    if (list->first != NULL) {
        Value *clean = list-> first;
        list->first = list->first->next;
        free(clean);
    }
}
void displayed(List *list)
{
    if (list == NULL)
        exit(EXIT_FAILURE);
    Value *display = list->first;

    while (display != NULL) {
        my_putnbr(display->number);
        my_putstr("->");
        display = display->next;
    }
    my_putstr("NULL");
}
void pb(struct List **ba, struct List **b)
{
    int i = 0;
    i = (*ba)->first->number;
    update(*b, i);
    clear(*ba);
    my_putstr("pb\n");
}
void pa(struct List **t, struct List **b)
{
    int i = 0;
    i = (*b)->first->number;
    update(*t, i);
    clear(*b);
    my_putstr("pa\n");
}
void ra(struct List **l_a)
{
    int i;
    i = (*l_a)->first->number;
    update_t(*l_a, i);
    clear(*l_a);
    my_putstr("l_a\n");
}
int main(int ac, char **av)
{
    int i = 1;
    struct List *a = malloc(sizeof(*a));
    struct List *b = malloc(sizeof(*b));
    while (av[i] != NULL) {
        update_t(a, atoi(av[i]));
        i++;
    }
/*    pb(&a, &b);
      pa(&a, &b);*/
    ra(&a);
    displayed(a);
    my_putchar('\n');
    displayed(b);
    my_putchar('\n');
}
