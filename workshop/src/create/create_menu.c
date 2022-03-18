/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "game.h"
#include "create.h"

#include "workshop/include/menu.h"

int create_menu_1(game_t *game, menu_t *menu);
int create_menu_2(game_t *game, menu_t *menu);
int create_menu_3(game_t *game, menu_t *menu);
int create_menu_4(game_t *game, menu_t *menu);

static int (*create_this_menu[MENU_COUNT])(game_t *game, menu_t *menu) = { \
    create_menu_1, create_menu_2, create_menu_3, create_menu_4 \
};

int create_menus(game_t *game)
{
    int count = 0;

    game->menu_count = MENU_COUNT;
    game->menus = malloc(sizeof(menu_t) * MENU_COUNT);
    if (!game->menus)
        return (0);
    while (count < MENU_COUNT) {
        if (!create_this_menu[count](game, &game->menus[count]))
            return (0);
        count++;
    }
    game->current_menu = &game->menus[0];
    return (1);
}
