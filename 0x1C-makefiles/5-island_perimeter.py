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
    while i < grid_height:
        if 1 in grid[i]:
            if i_min == -1:
                i_min = i
            if i > i_max:
                i_max = i
        j = 0
        while j < grid_width:
            current = grid[i][j]
            if current == 1:
                if j_min == -1:
                    j_min = j
                if j > j_max:
                    j_max = j
            j += 1
        i += 1

    if i_min == -1 and j_min == -1:
        return 0

    height = i_max + 1 - i_min
    width = j_max + 1 - j_min
    perimeter = (width + height) * 2
    return perimeter
