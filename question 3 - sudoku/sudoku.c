#include<stdio.h>
#include<conio.h>

#define UNASSIGNED 0
#define N 9
int FindUnassignedLocation(int grid[N][N],int row, int col){
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return 1;
    return 0;
}

int UsedInRow(int grid[N][N], int row, int num){
    int col;
    for (col = 0; col < N; col++)
        if (grid[row][col] == num)
            return 1;
    return 0;
}

int UsedInCol(int grid[N][N], int col, int num){
    int row;
    for (row = 0; row < N; row++){

    }

    return 0;
}

int UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num){
    int row, col;
    for (row = 0; row < 3; row++)
        for (col = 0; col < 3; col++)

    return 0;
}

int isSafe(int grid[N][N], int row, int col, int num){
    return !UsedInRow(grid, row, num) &&
           !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row % 3 ,
                      col - col % 3, num);
}

int SolveSudoku(int grid[N][N]){
    int row, col, num;

    if (FindUnassignedLocation(grid, row, col) == 0)
        return 1;
    for (num = 1; num <= 9; num++)
    {
        if (isSafe(grid, row, col, num))
        {
            grid[row][col] = num;

            if (SolveSudoku(grid))
                return 1;
        }
    }
    return 0;
}



void printGrid(int grid[N][N])
{
    int row, col;
    for ( row = 0; row < N; row++){
        for (col = 0; col < N; col++)
            printf("%d ",grid[row][col]);
        printf("\n");
    }
}

int main(){
    // one of the sample
    int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if (SolveSudoku(grid) == 1)
        printGrid(grid);
    else
        printf("No solution exists");

    return 0;
}

