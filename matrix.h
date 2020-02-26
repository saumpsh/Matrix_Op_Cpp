#include <iostream>
using namespace std;

#define M_ROWS 3
#define N_COLS 5

//void transpose(int arr[M_ROWS][N_COLS]);

class Matrix{
public:
    Matrix(int r, int c);
    void transpose(int arr[M_ROWS][N_COLS]);
    void fill(int **p, int rowSize, int columnSize);
    void print(int **p, int rowSize, int columnSize);

private:
    int **pMatrix;
    int rowSize, columnSize;
};

Matrix::Matrix(int r, int c){

}

void Matrix::transpose(int arr[M_ROWS][N_COLS])
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