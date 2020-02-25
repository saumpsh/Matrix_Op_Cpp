
void transpose(arr[r1][c1])
{
    int trans_matrix[c1][r1];
    printf( "%d,%d-\n",c1,r1); 
    
    for (int j = 0; j < c1; j++)
    {
        for (int i = 0; i < r1; i++)
        {
            trans_matrix[j][i] = my_matrix[i][j] ;
            printf( "%d,",trans_matrix[j][i]);   
        }
    printf( "\n");
    }
}

