#include <iostream>
using namespace std;

#include "matrix.h"

void transpose(int arr[M_ROWS][N_COLS])
{
    int trans_matrix[N_COLS][M_ROWS];
    printf( "%d,%d-\n", N_COLS, M_ROWS); 
    
    for (int j = 0; j < N_COLS; j++)
    {
        for (int i = 0; i < M_ROWS; i++)
        {
            trans_matrix[j][i] = arr[i][j] ;
            printf( "%d,",trans_matrix[j][i]);   
        }
        printf( "\n");
    }
}