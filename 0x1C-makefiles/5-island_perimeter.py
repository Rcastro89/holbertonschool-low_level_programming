#!/usr/bin/python3
"""validar perimetros"""


def island_perimeter(grid):
    """sumar perimetros"""
    var = None
    if len(grid) < 100:
        for fila in range(len(grid)):
            for colum in range(len(grid[fila])):
                if grid[fila][colum] == 1:
                    try:
                        if grid[fila-1][colum] == 0:
                            var = var + 1
                    except Exception:
                        pass
                    try:
                        if grid[fila][colum-1] == 0:
                            var = var + 1
                    except Exception:
                        pass
                    try:
                        if grid[fila][colum+1] == 0:
                            var = var + 1
                    except Exception:
                        pass
                    try:
                        if grid[fila+1][colum] == 0:
                            var = var + 1
                    except Exception:
                        pass
    return var
