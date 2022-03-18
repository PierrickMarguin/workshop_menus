/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "game.h"

#include "workshop/include/menu.h"

int draw_menu_background(game_t *game, menu_t *menu)
{
    sfRenderWindow_drawSprite(game->window, menu->background, NULL);
    return (1);
}
