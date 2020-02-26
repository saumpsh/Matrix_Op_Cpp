#include <stdio.h>
#include <iostream>
//#include "helper_stuff.h"

#include "matrix.h"

using namespace std;



int my_matrix[M_ROWS][N_COLS] = 
{
    {2, 1, 3, 9,12},
    {2, 4, 5, 11,14},
    {300, 6, 7, 1234,0}
};

// const int r1=3;
// const int c1=5;

int main()
{
    //Creates an object of type Matrix
    //Arguments are rows and columns
    Matrix m1(3, 2);
    
    m1.fill();
    m1.print();

    m1.transpose();
    return 0;
}
