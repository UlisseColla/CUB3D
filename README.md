# Cub3d

## Overview
This project is a 3D rendering engine implemented in C, inspired by classic games like Wolfenstein 3D. It uses the raycasting technique to transform a 2D map into a 3D perspective. This project is part of the 42 school common core and it is the last project written in C. The graphic library used for the project is the Minilibx, a 42's simpler and much more limited version of the Xlib (or libx11, for more info --> [Wiki](https://en.wikipedia.org/wiki/Xlib)) graphic library.

## Features
- **Raycasting Engine**: Efficiently renders a 3D scene from a 2D grid-based map.
- **Simple Map Format**: Easily customizable 2D maps to create various levels and environments.
- **Basic Textures and Colors**: Adds basic textures and colors to walls for improved visual aesthetics.
- **Player Movement**: Allows for player navigation through the map with basic controls.

In the subject pdf you can find the description of the project as it is presented to us students from the school.
As you can see there is a mandatory part, which consists in the basic 3d rendering of walls with different textures, plus being able to navigate through the map.
The bonus part adds some animation (sprites and doors animation), wall collision (in my version present already in the mandatory part), a minimap system and finally the possibility to rotate the point of view of the player using the mouse instead of the arrow keys.

It runs smoothly with no memory leakage, feel free to test it with valgrind, although this will terribly slow the rendering performance, making it almost impossible to navigate the map.

## Map format

The maps used in the game must have a specific extension --> .cub
They all heave to respect the following form:
```
<----------------------------------->

NO textures/mossed_wall.xpm
SO textures/normal_wall.xpm
WE textures/sign_wall.xpm
EA textures/torch_wall.xpm

C 53,41,34
F 45,33,27

111111111111111
111111000111111
111110000011111
1111000N0001111
111000000000111
110000000000011
100001111100001
110000111000011
111000010000111
111100000001111
111110000011111
111111000111111
111111111111111

<----------------------------------->
```
A texture for north, south, east and west wall, the rgb values for ceiling and floor, then finally the map itself.
Textures and colours must come before the map, otherwise an error will be thrown.

## Getting Started

### Prerequisites
To build and run this project, you need the following:
- A C compiler (GCC recommended)
- Make

### Building the Project
1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/raycasting-3d-renderer.git
    cd raycasting-3d-renderer
    ```
2. Build the mandatory part of the project using Make:
    ```sh
    make
    ```
3. Build the bonus part of the project:
    ```sh
    make bonus
    ```
The make command will compile automatically also the Minilibx library.

### Running the Project
After building the project, you can run the executable:
```sh
./cub3D maps/good/choose_a_map.cub
```

## Player's movement
- **W** Forward
- **S** Backward
- **A** Move left
- **D** Move right

- **<-** Rotate point of view to the left
- **->** Rotate point of view to the right

### Bonus part
- **Space** / **Left mouse button** Open and close the door
- **E** / **Right mouse button** Recenter mouse

## Textures

This project was a two people effort, and it is to the wonderful aconciar that I owe the fantastic tetures that you can admire in our rendering project. The texture are 64 x 64 pixels, in .xpm format. They were all made with Piskel, pixel by pixel!


