#!/usr/bin/python3
"""validar perimetros"""


def island_perimeter(grid):
    """sumar perimetros"""
    var = 0
    for fila in range(len(grid)):
        for colum in range(len(grid[fila])):
            if grid[fila][colum] == 1:
                if grid[fila-1][colum] == 0:
                    var = var + 1
                if grid[fila][colum-1] == 0:
                    var = var + 1
                if grid[fila][colum+1] == 0:
                    var = var + 1
                if grid[fila+1][colum] == 0:
                    var = var + 1
    return var
