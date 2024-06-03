#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
        """Return the perimiter of an island.

        The grid represents 0 for water and 1 for land.

        Args:
            grid (list): A list of list of integers representing an island.
        Returns:
            The perimeter of the island defined in grid.
        """
        larg = len(grid[0])
        haut = len(grid)
        edges = 0
        size = 0

        for i in range(haut):
            for j in range(larg):
                if grid[i][j] == 1:
                    size ++
                    if (j > 0 and grid[i][j - 1] == 1):
                        edges += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        edges += 1
        return size * 4 - edges * 2
