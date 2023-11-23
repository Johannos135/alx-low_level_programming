#!/usr/bin/python3
""" Module island_perimeter """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    nrows = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for r in range(nrows):
        for c in range(ncolumns):
            if grid[r][c] == 1:
                if (r - 1) == -1 or grid[r - 1][c] == 0:
                    perimeter += 1
                if (r + 1) == nrows or grid[r + 1][c] == 0:
                    perimeter += 1
                if (c - 1) == -1 or grid[r][c - 1] == 0:
                    perimeter += 1
                if (c + 1) == ncolumns or grid[r][c + 1] == 0:
                    perimeter += 1

    return perimeter
