#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid of integers.
 * @grid: The pointer to the grid to be freed.
 * @height: The height of the grid.
 *
 * This function frees the memory occupied by a 2D grid previously allocated
 * using alloc_grid.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);
    free(grid);
}
