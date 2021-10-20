/*
** EPITECH PROJECT, 2021
** my_params_to_list.c
** File description:
** create a new list from the comand line arguments
*/

#include "my.h"
#include "mylist.h"
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int my_add(linked_list_t **list, int argv)
{
    linked_list_t *element;

    element = malloc(sizeof(linked_list_t));
    element->data = argv;
    element->next = *list;
    *list = element;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char **av)
{
    linked_list_t *list = NULL;

    for (int i = ac - 2; i > 0; i--)
        my_add(&list, my_getnbr(av[i]));
    return (list);
}

lists_t push_l_a(lists_t lists)
{
    linked_list_t *temp = lists.l_b;

    lists.l_b = lists.l_b->next;
    temp->next = lists.l_a;
    lists.l_a = temp;
    return (lists);
}

lists_t push_l_b(lists_t lists)
{
    linked_list_t *temp = lists.l_a;

    lists.l_a = lists.l_a->next;
    temp->next = lists.l_b;
    lists.l_b = temp;
    return (lists);
}

lists_t rotate_l_a(lists_t lists)
{
    linked_list_t *last_node = lists.l_a;
    linked_list_t *temp = lists.l_a;

    if (lists.l_a->next == NULL)
        return (lists);
    lists.l_a = lists.l_a->next;
    while (last_node->next != NULL)
        last_node = last_node->next;
    last_node->next = temp;
    temp->next = NULL;
    return (lists);
}
