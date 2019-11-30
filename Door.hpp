//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include "Room.hpp"
#include <iostream>
using namespace std;

class Door {
protected:
    Room * room1;
    Room * room2;
public:
    virtual void setRooms(Room * r1, Room * r2) = 0;
    virtual void print() = 0;
    virtual ~Door() = default;

};

class e_door : public Door{
public:
    e_door(){print();}
    void setRooms(Room * r1, Room *r2){
        room1 = r1;
        room2 = r2;
    }
    void print() override{
        cout << "building a door of the enchanted fairy land "<<endl;
    }
    ~e_door() override {
        delete room1;
        delete room2;
    }
};
class d_door : public Door{
public:
    d_door(){print();}
    void setRooms(Room * r1, Room *r2){
        room1 = r1;
        room2 = r2;
    }
    void print () override{
        cout << "building door of the futuristic dystopian maze"<< endl;
    }
    ~d_door() override {
        delete room1;
        delete room2;
    }
};
#endif //ABSTRACTFACTORY_DOOR_HPP
