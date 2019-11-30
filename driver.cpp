#include <iostream>
#include "maze_game.hpp"

int main() {
    maze_game game;

    maze_factory *enchanted = new e_factory{};
    Maze *enchanted_maze = game.create_maze(enchanted);
    enchanted_maze->print();

    cout << "" << endl;

    maze_factory *dystopian = new d_factory{};
    Maze *dystopian_maze = game.create_maze(dystopian);


    dystopian_maze->print();

    delete enchanted_maze;
    delete dystopian_maze;
    delete enchanted;
    delete dystopian;

    return 0;
}
