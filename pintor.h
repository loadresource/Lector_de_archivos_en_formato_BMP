#ifndef PINTOR_H
#define PINTOR_H

#include <stdint.h>
#include <SDL2/SDL.h>

typedef struct
{
    SDL_Window *ventana;
    SDL_Renderer *render;
} sdl_config;

typedef struct
{
    uint8_t rojo;
    uint8_t verde;
    uint8_t azul;
} color;

void pintar(sdl_config *conifg, int x, int y, color *mi_color);

void iniciar(sdl_config *config);

#endif