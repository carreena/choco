/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/


#ifndef PUSHWASP_Y_
    #define PUSHWASP_Y_
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct Value Value;
struct Value
{
    int number;
    Value *next;
};

typedef struct List List;
struct List
{
    Value *first;
    Value *end;
};

void my_putchar(char c);
int my_putstr(char *str);
int my_putnbr(int nb);

#endif
