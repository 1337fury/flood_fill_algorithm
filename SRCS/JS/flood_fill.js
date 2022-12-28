const grid = [    
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 0, 0, 0, 0, 1, 1, 1],
    [1, 1, 1, 0, 0, 0, 0, 1, 1, 1],
    [1, 1, 1, 0, 0, 0, 0, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
];

const floodFill = (grid, x, y, oldColor, newColor) => {
    // base case: return if x or y is out of bounds or cell is not oldColor
    if (x < 0 || x >= grid.length || y < 0 || y >= grid[0].length || grid[x][y] !== oldColor) {
        return;
    }

    // fill cell with new color
    grid[x][y] = newColor;

    // recur for north, east, south, and west cells
    floodFill(grid, x + 1, y, oldColor, newColor);
    floodFill(grid, x - 1, y, oldColor, newColor);
    floodFill(grid, x, y + 1, oldColor, newColor);
    floodFill(grid, x, y - 1, oldColor, newColor);
};

floodFill(grid, 2, 2, 0, 3);
