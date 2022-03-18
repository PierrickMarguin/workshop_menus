/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "workshop/include/menu.h"

int copy_draw_tab(menu_t *menu, draw_function *tab)
{
    int count = 0;

    while (tab[count])
        count++;
    menu->draws = malloc(sizeof(draw_function) * (count + 1));
    if (!menu->draws)
        return (0);
    menu->draws[count] = NULL;
    while (count > 0) {
        count--;
        menu->draws[count] = tab[count];
    }
    return (1);
}
