/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include "game.h"
#include "create.h"
#include "event.h"

#include "workshop/include/menu.h"
#include "workshop/include/menus/menu_1.h"

int copy_draw_tab(menu_t *menu, draw_function *tab);
int copy_event_tab(menu_t *menu, event_function tab[sfEvtCount][MAX_EVENT_COUNT]);

int create_menu_1(game_t *game, menu_t *menu)
{
    (void)game;
    if (!copy_event_tab(menu, &events[0]))
        return (0);
    if (!copy_draw_tab(menu, &draws[0]))
        return (0);
    menu->background_texture = sfTexture_createFromFile("assets/black_ops.jpg", NULL);
    if (!menu->background_texture)
        return (0);
    menu->background = sfSprite_create();
    if (!menu->background)
        return (0);
    sfSprite_setTexture(menu->background, menu->background_texture, sfFalse);
    return (1);
}
