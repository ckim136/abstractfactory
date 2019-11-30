//
// Created by kimem on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <iostream>

using namespace std;

class Wall {
public:
    virtual void print() = 0;
    virtual ~Wall() = default;
};

class e_wall : public Wall {
public:
    e_wall(){print();}
    void print() override {
        cout << "building a wall of the enchanted fairy land" << endl;
    }
};

class d_wall : public Wall {
public:
    d_wall(){print();}
    void print() override {
        cout << "building a wall of the futuristic dystopian maze" << endl;
    }
};

#endif //ABSTRACTFACTORY_WALL_HPP
