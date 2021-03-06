#ifndef BLOCKS_SYSTEM_H
#define BLOCKS_SYSTEM_H
#include <SFML/Graphics.hpp>
#include "Tetrimino.h"
#include <map>
#include <memory.h>


class Blocks_system
{
    public:
        //int net_width=10;
        //int net_height=20;
        sf::RectangleShape game_field;
        Blocks_net blocks_net;

        sf::RectangleShape next_spawn_field;
        Blocks_net next_spawn_space;

        int number_of_tetrimino=1;
        std::unique_ptr<Tetrimino> tetrimino;
        std::unique_ptr<Tetrimino> next_tetrimino;
        sf::RectangleShape block_pointer;

        std::map<char, sf::Color> color_map;

        Blocks_system();
        virtual ~Blocks_system() = default;

        void flor_crush(int flor);
        void show_next_spawn(sf::RenderWindow &window);

    protected:

    private:
};

#endif // BLOCKS_SYSTEM_H
