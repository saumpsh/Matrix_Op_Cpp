#include <iostream>
#include <iomanip>

using namespace std;

#define M_ROWS 3
#define N_COLS 5

//void transpose(int arr[M_ROWS][N_COLS]);

class Matrix{
public:
    Matrix(int r, int c);
    void transpose(int arr[M_ROWS][N_COLS]);
    void fill();
    void print();
    // void getRow(){cout << rowSize;}
    // void getCol(){cout<< columnSize;}

private:
    int **pMatrix;
    int rowSize, columnSize;
};

Matrix::Matrix(int r, int c){
    rowSize = r; columnSize = c;
    pMatrix = new int*[rowSize];

    for (int row = 0; row < rowSize; row++){
        pMatrix[row]= new int[columnSize];
    }
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

void Matrix::fill()
{
    for (int row = 0; row < rowSize; row++)
    {
        cout << "Enter " << columnSize << " number(s) for row "
             << "number " << row << ": ";
        for (int col = 0; col < columnSize; col++){
            cin >> pMatrix[row][col];
        }            
        cout << endl;
    }
}

void Matrix::print()
{
    cout << "Matrix is: "<<endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < columnSize; col++)
            cout << setw(5) << pMatrix[row][col];
        cout << endl;   
    }
}