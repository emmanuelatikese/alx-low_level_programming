#!/usr/bin/python3

def island_perimeter(grid):
    '''This is all about perims'''
    if grid:
        count, side = 0, 1
        for x in grid:
            count += side
        result = (count * 2) + (side * 2)
        return result
    return 0
