/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#ifndef MENU_H_
#define MENU_H_

#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <SFML/Network.h>
#include <SFML/Graphics.h>

#define MENU_COUNT 4

#define MAX_EVENT_COUNT 10

// tkt 
typedef struct game_s game_t;
typedef struct menu_s menu_t;

// déclaration de types pour les fonctions d'affichage et d'evenement
typedef int (*event_function)(game_t *, sfEvent);
typedef int (*draw_function)(game_t *, menu_t *);

// structure du menu
typedef struct menu_s {
    event_function *events[sfEvtCount];
    draw_function *draws;
    sfSprite *background;
    sfTexture *background_texture;
} menu_t;

// appellee une fois au debut du programme pour construire les menus
int create_menus(game_t *game);

// appellee une fois a la fin du programme pour detruire les menus
int destory_menu(game_t *game);

// appellee a chaque tour pour afficher le menu
int draw_menu(game_t *game);

// appellee a chaque tour pour gerer les evenements
int handle_menu_event(game_t *game);

int move_to_menu(game_t *game, sfEvent event);

#endif /* MENU_H_ */
