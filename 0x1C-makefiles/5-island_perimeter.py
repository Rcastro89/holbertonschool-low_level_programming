#!/usr/bin/python3
"""validar perimetros"""


def validar_rectangulo(grid):
    """validar rectangulo"""
    alto = len(grid)
    largoreal = len(grid[0])
    for fila in range(len(grid)):
        largo = len(grid[fila])
        if largo != largoreal:
            return -1
        if largo == alto:
            return -1
    return 0


def island_perimeter(grid):
    """sumar perimetros"""
    var = None
    if len(grid) < 100 and len(grid) > 0:
        var = 0
        if validar_rectangulo(grid) == -1:
            return None
        for fila in range(len(grid)):
            if len(grid[fila]) > 100 or len(grid[fila]) == 0:
                return None
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
                if grid[fila][colum] == 0:
                    try:
                        if grid[fila-1][colum] == 1 and grid[fila][colum-1] == 1 and grid[fila][colum+1] == 1 and grid[fila+1][colum] == 1:
                            return None
                    except Exception:
                        pass
    return var
