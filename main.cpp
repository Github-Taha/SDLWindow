#include <iostream>
#include "SDL2/SDL.h"

using namespace std;

int main (int argc, char* argv[])
{

    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event e;

    SDL_Init ( SDL_INIT_EVERYTHING );

    SDL_CreateWindowAndRenderer ( 500, 500, 0, &window, &renderer );

    bool running = true;

    while ( running )
    {
        while ( SDL_PollEvent ( &e ) )
        {
            if ( e.type == SDL_QUIT )
            {
                running = false;
            }

        }
        
        SDL_SetRenderDrawColor ( renderer, 0, 0, 0, 255 );

        SDL_RenderPresent ( renderer );
    }

    SDL_DestroyWindow ( window );

    SDL_Quit();

    return 0;

}
