/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main for push_swap
*/

#include "my.h"
#include "mylist.h"
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

lists_t radix(lists_t lists);
int size_list(linked_list_t *list);

int main(int ac, char **av)
{
    lists_t lists;

    if (ac == 2) {
        my_printf("\n");
        return (0);
    }
    if (av[1][0] == '-' && av[1][1] == 'v') {
        lists.l_a = my_params_to_list(ac, av);
        lists.l_b = NULL;
        if (check_sort_arg(lists.l_a) == 1)
            lists = radix(lists);
    }
    my_printf("\n");
    return (0);
}
