//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game{
public:
    Maze * create_maze(maze_factory * factory){
        Maze * maze = factory->make_maze();
        Room *room1 = factory->make_room();
        Room *room2 = factory->make_room();
        Room *room3 = factory->make_room();
        Wall *wall = factory->make_wall();
        Wall *wall2 = factory->make_wall();
        Door *door = factory->make_door(room1, room2);
        door->setRooms(room1,room2);
        maze->addRoom(room1);
        maze->addRoom(room2);
        maze->addRoom(room3);
        maze->addDoor(door);
        maze->addWall(wall);
        maze->addWall(wall2);
        return maze;
    }
};
#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
