#!/usr/bin/python3
"""Documenting module"""


def island_perimeter(grid):
    length_row = len(grid)
    lenght_col = len(grid[0])

    p = 0
    connections = 0
    for x in range(length_row):
        for y in range(0, lenght_col):
            if grid[x][y] == 1:
                p += 4

                # TOP CHECK
                if x != 0 and grid[x - 1][y] == 1:
                    connections += 1
                if y != 0 and grid[x][y - 1] == 1:
                    connections += 1

    return p - (connections * 2)
