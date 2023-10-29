#!/usr/bin/python3

def island_perimeter(grid):
    """initialize variable perimeter to zero"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    # Iterate through each row and column of the grid.
    # If the current cell is a land zone (1), check its neighboring cells.
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
