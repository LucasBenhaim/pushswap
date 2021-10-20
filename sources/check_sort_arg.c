/*
** EPITECH PROJECT, 2021
** check_sort_arg.c
** File description:
** check if the argument given as parameters are already sorted
*/

#include "mylist.h"
#include <stddef.h>
#include <stdio.h>

int check_sort_arg(linked_list_t *list)
{
    for (linked_list_t *temp = list; temp->next != NULL; temp = temp->next) {
        if (temp->data > temp->next->data)
            return (1);
    }
    return (0);
}
