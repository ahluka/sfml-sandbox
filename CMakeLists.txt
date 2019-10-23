cmake_minimum_required (VERSION 2.6)
project (sfml-sandbox)
add_executable (sfml-sandbox main.cpp)
target_link_libraries (sfml-sandbox sfml-graphics sfml-window sfml-system)

