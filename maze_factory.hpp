//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "Maze.hpp"


class maze_factory{

public:
    virtual ~maze_factory() = default;
    virtual Maze *make_maze() = 0;
    virtual Wall *make_wall() = 0;
    virtual Room *make_room() = 0;
    virtual Door *make_door(Room * room1, Room * room2) = 0;
};

class e_factory: public maze_factory{
public:
    e_factory(){
        cout << "creating an enchanted fairy land maze factory"<<endl;
    }
    ~e_factory() override = default;

    Maze * make_maze() override {
        Maze *maze = new e_maze{};
        return maze;
    }
    Wall * make_wall() override{
        Wall * wall = new e_wall{};
        return wall;

    }
    Room * make_room() override {
        Room * room = new e_room{};
        return room;
    }
    Door * make_door(Room * room1, Room * room2) override{
        Door * door = new e_door{};

    }
};

class d_factory: public maze_factory{
public:
    d_factory(){
        cout << "creating a futuristic dystopian maze factory"<< endl;
    }
    ~d_factory() override = default;
    Maze * make_maze() override {
        Maze *maze = new d_maze{};
        return maze;
    }
    Wall * make_wall() override{
        Wall * wall = new d_wall{};
        return wall;

    }
    Room * make_room() override {
        Room * room = new d_room{};
        return room;
    }
    Door * make_door(Room * room1, Room * room2) override{
        Door * door = new d_door{};

    }
};
#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
