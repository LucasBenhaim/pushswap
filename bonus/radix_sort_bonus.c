/*
** EPITECH PROJECT, 2021
** radix_sort.c
** File description:
** use the radix for sorting a linked_list
*/

#include "my.h"
#include "mylist.h"
#include "lists.h"
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

int find_max(linked_list_t *list)
{
    int stock = list->data;

    while (list != NULL) {
        if (stock < list->data)
            stock = list->data;
        list = list->next;
    }
    return (stock);
}

int highest_x(linked_list_t *list)
{
    int x;
    int valeur = find_max(list);

    for (x = 0; (((valeur >> x) & INT_MAX) >= 1); x++);
    return (x);
}

int size_list(linked_list_t *list)
{
    int size;

    for (size = 0; list != NULL; size++)
        list = list->next;
    return (size);
}

void display_list(linked_list_t *list)
{
    for (linked_list_t *tmp = list; tmp; tmp = tmp->next)
        my_printf("%d ", tmp->data);
    my_printf("\n");
}

lists_t radix(lists_t lists)
{
    int max_la = size_list(lists.l_a);
    int max_lb;
    int x = 0;

    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < max_la; j++) {
            if (i == 31)
                x = 1;
            if ((lists.l_a->data >> i & 1) == x) {
                lists = push_l_b(lists);
                my_printf("pb\nl_a ");
                display_list(lists.l_b);
                my_printf("l_b\n\n");
            }
            else {
                lists = rotate_l_a(lists);
                my_printf("ra\nl_a ");
                display_list(lists.l_a);
                my_printf("l_b\n\n");
            }
        }
        max_lb = size_list(lists.l_b);
        for (int k = 0; k < max_lb; k++) {
            lists = push_l_a(lists);
            my_printf("pa\nl_a ");
            display_list(lists.l_a);
            my_printf("l_b ");
            display_list(lists.l_b);
            my_printf("\n");
        }
    }
    return (lists);
}
