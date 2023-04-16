# flood fill algorithm
This repository contains an implementation of the flood fill algorithm in (C/C++/JS), as well as a brief explanation of how the algorithm works.

## What is the flood fill algorithm?
The flood fill algorithm is a way to fill a connected region of a grid with a specific color. It starts at a given cell and expands outward until it reaches cells that are not part of the region or are already colored.

Here is an example of how flood fill might be used:

Imagine you have a grid of cells representing a maze, where 0 represents an empty cell and 1 represents a wall. You want to fill all the cells that are reachable from a given starting cell with a different color, so that you can see which cells are part of the same region as the starting cell.

To do this, you can use the flood fill algorithm. You would start at the given starting cell and change its color to the new color. Then, you would recursively check the cells to the north, east, south, and west of the starting cell, and change their colors as well if they are 0 (empty). This process would continue until all reachable cells have been colored.

## How to use the implementation
The implementation of the flood fill algorithm can be found in the flood_fill.c file. To use it, simply include the file in your project and call the floodFill function with the appropriate parameters.

The `floodFill` function takes in the following parameters:

- `grid`: a 2D array representing the grid of cells
- `x`: the x coordinate of the starting cell
- `y`: the y coordinate of the starting cell
- `oldColor`: the color of the cells that should be filled
- `newColor`: the color to fill the cells with
