/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <string.h>
#include "game.h"
#include "destroy.h"

static int (*destroy_tab[])(game_t *) = {destroy_window, destroy_view, destroy_clock, destroy_background, NULL};

int destroy_struct(game_t *game)
{
    int count = 0;

    while (destroy_tab[count]) {
        if (!destroy_tab[count](game)) {
            return (0);
        }
        count++;
    }
    return (1);
}
