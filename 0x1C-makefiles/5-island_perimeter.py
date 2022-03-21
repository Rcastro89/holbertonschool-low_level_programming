#!/usr/bin/python3
"""validar perimetros"""


def island_perimeter(grid):
    """sumar perimetros"""
    rows = len(grid)
    var = 0
    for i in range(rows):
        cols = len(grid[i])
        for j in range(cols):
            if (grid[i][j] == 1):
                if j == 0 or grid[i][j - 1] == 0:
                    var = var + 1
                if i == 0 or grid[i - 1][j] == 0:
                    var = var + 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    var = var + 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    var = var + 1
    return var
