cmake_minimum_required(VERSION 3.14)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory driver.cpp maze_factory.hpp Maze.hpp Wall.hpp Room.hpp Door.hpp maze_game.hpp)