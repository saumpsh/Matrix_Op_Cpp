#include <stdio.h>
#include "helper_stuff.h"

const int my_matrix[3][5] = 
{
    {2, 1, 3, 9,12},
    {2, 4, 5, 11,14},
    {300, 6, 7, 1234,0}
};
const int r1=3;
const int c1=5;



int main()
{
    transpose(my_matrix);
    return 0;
}
