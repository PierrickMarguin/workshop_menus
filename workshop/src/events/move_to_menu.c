/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"

#include "workshop/include/menu.h"

int move_to_menu(game_t *game, sfEvent event)
{
    if (event.key.code == sfKeyA)
        game->current_menu = &game->menus[0];
    if (event.key.code == sfKeyZ)
        game->current_menu = &game->menus[1];
    if (event.key.code == sfKeyE)
        game->current_menu = &game->menus[2];
    if (event.key.code == sfKeyR)
        game->current_menu = &game->menus[3];
    return (1);
}
