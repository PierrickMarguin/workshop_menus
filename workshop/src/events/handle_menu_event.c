/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"

#include "workshop/include/menu.h"

int handle_menu_event(game_t *game)
{
    sfEvent event;
    int count = 0;

    while (sfRenderWindow_pollEvent(game->window, &event)) {
        while (game->current_menu->events[event.type][count]) {
            if (!game->current_menu->events[event.type][count](game, event))
                return (0);
            count++;
        }
        count = 0;
    }
    return (1);
}
