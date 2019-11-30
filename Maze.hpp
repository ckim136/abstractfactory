//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP
#include <iostream>
#include <vector>
#include "Wall.hpp"
#include "Door.hpp"
#include "Room.hpp"
using namespace std;

class Maze{

public:
    virtual ~Maze() = default;
    vector<Room*> room_list;
    vector<Wall*> wall_list;
    vector<Door*> door_list;
    virtual void addRoom(Room * room) = 0;
    virtual void addDoor(Door * door) = 0;
    virtual void addWall(Wall * wall) = 0;
    virtual void print() = 0;

};
class e_maze: public Maze{
    void addRoom(Room * room) override{
        room_list.push_back(room);
        cout << "adding room to the enchanted fairy land" << endl;
    }
    void addDoor(Door * door) override{
        door_list.push_back(door);
        cout << "adding door to the enchanted fairy land" << endl;
    }
    void addWall(Wall * wall) override{
        wall_list.push_back(wall);
        cout << "adding wall to the enchanted fairy land" << endl;
    }
    void print() override{
        cout << "This enchanted fairy land maze has" << endl;
        cout << room_list.size() << " rooms," << endl;
        cout << door_list.size()<< " doors," << endl;
        cout << wall_list.size() << " walls," << endl;


    }
    virtual ~e_maze(){
        for(Door *d: door_list){
            delete d;
        }
        for(Wall *w: wall_list){
            delete w;
        }
    }

public:
    e_maze(){
        cout << "creating an enchanted fairy land maze" << endl;
    }
};

class d_maze: public Maze{
    void addRoom(Room * room) override{
        room_list.push_back(room);
        cout << "adding room to the futuristic dystopian maze" << endl;
    }
    void addDoor(Door * door) override{
        door_list.push_back(door);
        cout << "adding door to the futuristic dystopian maze" << endl;
    }
    void addWall(Wall * wall) override{
        wall_list.push_back(wall);
        cout << "adding wall to the futuristic dystopian maze" << endl;
    }
    void print() override{
        cout << "This futuristic dystopian maze has" << endl;
        cout << room_list.size() << " rooms," << endl;
        cout << door_list.size()<< " doors," << endl;
        cout << wall_list.size() << " walls," << endl;
    }
    virtual ~d_maze(){
        for(Door *d: door_list){
            delete d;
        }
        for(Wall *w: wall_list){
            delete w;
        }
    }

public:
    d_maze(){
        cout << "creating a futuristic dystopian maze"<< endl;
    }
};
#endif //ABSTRACTFACTORY_MAZE_HPP
