/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#ifndef MENU_1_H_
#define MENU_1_H_

#include "workshop/include/menu.h"

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

int draw_menu_background(game_t *game, menu_t *menu);

static draw_function draws[] = {draw_menu_background, NULL};

#endif /* MENU_1_H_ */
