/*
** EPITECH PROJECT, 2021
** my_putnbr.c
** File description:
** putnbr
*/

#include "../include/my.h"

int my_putnbr(int nb)
{
    int number;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb <= 9)
        my_putchar(nb + 48);
    else {
        number = nb % 10;
        nb = nb / 10;
        my_putnbr(nb);
        my_putchar(number + 48);
    }
    return 0;
}
