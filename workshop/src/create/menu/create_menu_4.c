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

int copy_draw_tab(menu_t *menu, draw_function *tab);
int copy_event_tab(menu_t *menu, event_function tab[sfEvtCount][MAX_EVENT_COUNT]);

int draw_menu_background(game_t *game, menu_t *menu);

static event_function events[sfEvtCount][MAX_EVENT_COUNT] = {
    {event_closed, NULL}, // sfEvtClosed
    {event_resized, NULL}, // sfEvtResized
    {NULL}, // sfEvtLostFocus
    {NULL}, // sfEvtGainedFocus
    {NULL}, // sfEvtTextEntered
    {NULL}, // sfEvtKeyPressed
    {move_to_menu, NULL}, // sfEvtKeyReleased
    {NULL}, // sfEvtMouseWheelMoved
    {NULL}, // sfEvtMouseWheelScrolled
    {event_mouse_button_pressed, NULL}, // sfEvtMouseButtonPressed
    {event_mouse_button_released, NULL}, // sfEvtMouseButtonReleased
    {event_mouse_moved, NULL}, // sfEvtMouseMoved
    {NULL}, // sfEvtMouseEntered
    {NULL}, // sfEvtMouseLeft
    {NULL}, // sfEvtJoystickButtonPressed
    {NULL}, // sfEvtJoystickButtonReleased
    {NULL}, // sfEvtJoystickMoved
    {NULL}, // sfEvtJoystickConnected
    {NULL}, // sfEvtJoystickDisconnected
    {NULL}, // sfEvtTouchBegan
    {NULL}, // sfEvtTouchMoved
    {NULL}, // sfEvtTouchEnded
    {NULL} // sfEvtSensorChanged
};

static draw_function draws[] = {draw_menu_background, NULL};

int create_menu_4(game_t *game, menu_t *menu)
{
    (void)game;
    if (!copy_event_tab(menu, &events[0]))
        return (0);
    if (!copy_draw_tab(menu, &draws[0]))
        return (0);
    menu->background_texture = sfTexture_createFromFile("assets/black_ops_4.jpg", NULL);
    if (!menu->background_texture)
        return (0);
    menu->background = sfSprite_create();
    if (!menu->background)
        return (0);
    sfSprite_setTexture(menu->background, menu->background_texture, sfFalse);
    return (1);
}
