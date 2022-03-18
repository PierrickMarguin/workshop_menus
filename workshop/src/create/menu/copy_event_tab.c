/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#include <stdlib.h>
#include "workshop/include/menu.h"

static int tab_line_len(event_function *line)
{
    int count = 0;

    while (line[count])
        count++;
    return (count);
}

int copy_event_tab(menu_t *menu, event_function tab[sfEvtCount][MAX_EVENT_COUNT])
{
    int count = 0;
    int pos = 0;

    while (count < sfEvtCount) {
        menu->events[count] = malloc(sizeof(event_function) * \
                                     (tab_line_len(tab[count]) + 1));
        if (!menu->events)
            return (0);
        while (tab[count][pos]) {
            menu->events[count][pos] = tab[count][pos];
            pos++;
        }
        menu->events[count][pos] = NULL;
        pos = 0;
        count++;
    }
    return (1);
}
