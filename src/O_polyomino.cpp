#include "O_polyomino.h"
#include <SFML/Graphics.hpp>

O_polyomino::O_polyomino()
{
    block_color='o';
    //ctor
}

O_polyomino::~O_polyomino()
{
    //dtor
}

bool O_polyomino::rotation(Blocks_net &net,std::string direction)
{
    //clear old position of tetrimino
    //clear_pos(net);
    try_position.first_block_pos=sf::Vector2i(try_position.main_block_pos.x+1,try_position.main_block_pos.y);
    try_position.second_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y+1);
    try_position.third_block_pos=sf::Vector2i(try_position.main_block_pos.x+1,try_position.main_block_pos.y+1);

/*
    if(direction=="right"){
        if(try_position.spin<3){
           try_position.spin++;
        }else{
           try_position.spin=0;
        }
    }
    if(direction=="left"){
        if(try_position.spin>0){
           try_position.spin--;
        }else{
            try_position.spin=3;
        }
    }else if(direction!="none"){
        return 0;
    }


    //rotate
    switch(try_position.spin){
        case 0:
            try_position.first_block_pos=sf::Vector2i(try_position.main_block_pos.x-1,try_position.main_block_pos.y);
            try_position.second_block_pos=sf::Vector2i(try_position.main_block_pos.x+1,try_position.main_block_pos.y);
            try_position.third_block_pos=sf::Vector2i(try_position.main_block_pos.x+2,try_position.main_block_pos.y);
            break;
        case 1:
            try_position.first_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y-1);
            try_position.second_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y+1);
            try_position.third_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y+2);
            break;
        case 2:
            try_position.first_block_pos=sf::Vector2i(try_position.main_block_pos.x+1,try_position.main_block_pos.y);
            try_position.second_block_pos=sf::Vector2i(try_position.main_block_pos.x-1,try_position.main_block_pos.y);
            try_position.third_block_pos=sf::Vector2i(try_position.main_block_pos.x-2,try_position.main_block_pos.y);
            break;
        case 3:
            try_position.first_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y+1);
            try_position.second_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y-1);
            try_position.third_block_pos=sf::Vector2i(try_position.main_block_pos.x,try_position.main_block_pos.y-2);
            break;
    }
*/

    return 1;
}
