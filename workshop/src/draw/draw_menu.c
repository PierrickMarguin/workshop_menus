/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"

#include "workshop/include/menu.h"

int draw_menu(game_t *game)
{
    int count = 0;

    if (sfTime_asSeconds(sfClock_getElapsedTime(game->draw_clock)) < 1.0 / 60.0)
        return (1);
    sfRenderWindow_clear(game->window, sfBlack);
    while (game->current_menu->draws[count]) {
        if (!game->current_menu->draws[count](game, game->current_menu))
            return (0);
        count++;
    }
    sfRenderWindow_display(game->window);
    sfClock_restart(game->draw_clock);
    return (1);
}
