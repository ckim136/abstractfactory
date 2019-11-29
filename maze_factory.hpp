//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

class Maze{
    virtual void describe() = 0;

};
class Wall{
    virtual void describe() = 0;
};
class Room{
    virtual void describe() = 0;
};
class Door{
    virtual void describe() = 0;
};

class maze_factory{
public:
    virtual Maze *make_maze() = 0;
    virtual Wall *make_wall() = 0;
    virtual Room *make_room() = 0;
    virtual Door *make_door(Room & room1, Room & room2) = 0;
};

class maze_game{
public:
    Maze * create_maze(maze_factory & factory){
        Maze * maze = factory.make_maze();
        Room *room1 = factory.make_room();
        Room *room2 = factory.make_room();
        Wall *wall = factory.make_wall();
        Door *door = factory.make_door(*room1, *room2);
    }
};
#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
