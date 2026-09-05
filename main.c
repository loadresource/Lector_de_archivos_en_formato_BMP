#include "pintor.h"

int main(void)
{
    sdl_config *config = malloc(sizeof(sdl_config));
    color *mi_color = malloc(sizeof(color));
    mi_color->rojo = 255;
    mi_color->verde = 0;
    mi_color->azul = 0;

    iniciar(config);
    pintar(config, 300, 200, mi_color);
    SDL_RenderPresent(config->render);
    SDL_Delay(5000);

    SDL_DestroyRenderer(config->render);
    SDL_DestroyWindow(config->ventana);
    SDL_Quit();
}