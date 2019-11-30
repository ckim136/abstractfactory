//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP
#include <iostream>
using namespace std;
class Room{
public:
    virtual void print() = 0;
    virtual ~Room() = default;
};
class e_room: public Room{
public :
    e_room(){print();}
    void print() override {
    cout << "building a room of the enchanted fairy land" << endl;
}
};
class d_room : public Room{
public:
    d_room(){print();}
    void print() override {
        cout << "building a room of the futuristic dystopian maze"<< endl;
    }
};
#endif //ABSTRACTFACTORY_ROOM_HPP
