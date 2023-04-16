#include <stdio.h>

#define ROWS 10
#define COLS 10

int grid[ROWS][COLS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

void floodFillUtil(int x, int y, int oldColor, int newColor) {
    // base case
    if (x < 0 || x >= ROWS || y < 0 || y >= COLS) {
        return;
    }
    if (grid[x][y] != oldColor) {
        return;
    }

    // fill color_
    grid[x][y] = newColor;

    // recur for north, east, south, and west
    floodFillUtil(x+1, y, oldColor, newColor);
    floodFillUtil(x-1, y, oldColor, newColor);
    floodFillUtil(x, y+1, oldColor, newColor);
    floodFillUtil(x, y-1, oldColor, newColor);
}

void floodFill(int x, int y, int newColor) {
    int oldColor = grid[x][y];
    floodFillUtil(x, y, oldColor, newColor);
}
