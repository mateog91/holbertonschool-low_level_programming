#!/usr/bin/python3
""" Module for Island Perimeter
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid:
    """
    if not grid:
        raise ValueError("No Grid")
    elif not isinstance(grid, list):
        raise ValueError("Not a list")
    elif not isinstance(grid[0], list):
        raise ValueError("Not a list of list")

    i_min, j_min = -1, -1
    i_max, j_max = 0, 0
    grid_width, grid_height = len(grid[0]), len(grid)
    i = 0
    perimeter = 0
    while i < grid_height:
        j = 0
        while j < grid_width:
            current = grid[i][j]
            if current == 1:
                # edge case column 0
                if j == 0:
                    perimeter += 1
                elif grid[i][j-1] == 0:
                    perimeter += 1

                # edgecase last column
                if j == grid_width - 1:
                    perimeter += 1
                elif grid[i][j+1] == 0:
                    perimeter += 1

                # edgecase row 0
                if i == 0:
                    perimeter += 1
                elif grid[i-1][j] == 0:
                    perimeter += 1

                # edecase last row
                if i == grid_height - 1:
                    perimeter += 1
                elif grid[i+1][j] == 0:
                    perimeter += 1
            j += 1
        i += 1
    return perimeter
