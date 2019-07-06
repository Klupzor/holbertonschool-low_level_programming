#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    x = 0
    y = 0

    ylen = len(grid)
    xlen = len(grid[0])
    xsize = 0
    ysize = 0
    print("len y: {} len x: {}".format(ylen, xlen))

    for xs in grid:
        while (x < xlen):
            if xs[x] == 1:
                while (x < xlen):
                    if xs[x] == 0 or x == xlen - 1:
                        xsize += 2
                        break
                    x += 1
            x += 1
        x = 0

    x = 0
    y = 0

    while (x < xlen):
        while (y < ylen):
            if grid[y][x] == 1:
                while (y < ylen):
                    if grid[y][x] == 0 or y == ylen - 1:
                        ysize += 2
                        break
                    y += 1
            y += 1
        y = 0
        x += 1
    return(xsize + ysize)
