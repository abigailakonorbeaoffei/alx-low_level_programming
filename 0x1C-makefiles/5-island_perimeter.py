#!/usr/bin/python3
"""Defines an island perimeter measuring function"""

def island_perimeter(grid):
    """Returns the perimeter of an island.

    0 represents water zone and 1 for land zone.

    Args:
        grid (list): A list of interger representing an island.
    Returns:
        The perimetr of the island is defined in the grid.
    """
    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1[j] == 1):
                    edges += 1
        return size * 4 - edges * 2

