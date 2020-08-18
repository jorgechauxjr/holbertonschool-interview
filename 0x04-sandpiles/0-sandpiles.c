#include <stdlib.h>
#include <stdio.h>

/**
 * grid_addition - add 2 grids
 * @grid1: first matrix
 * @grid2: second matrix
 */

void grid_addition(int grid1[3][3], int grid2[3][3]) {
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}
}

/**
 * sandpiles_sum - sum 2 sandpiles
 * @grid1: first matrix
 * @grid2: second matrix
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3]) {
	grid_addition(grid1, grid2); 
}
