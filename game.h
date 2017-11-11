#ifndef GAME_H
#define GAME_H
#include "dungeon.h"
#include "room.h"
class Game {
	private:
		//Dungeon WIIA;
        Dungeon* dung;
        static Game* g_instance;
        Game();
	public:
        static Game* instance() {
            if (!g_instance) 
                g_instance = new Game();
            return g_instance;
        }

		//Initializer for the entire game
		void start();
		//Where the game actually starts running
		void run();
		//Where we start destroying things
		void end();
};
#endif
