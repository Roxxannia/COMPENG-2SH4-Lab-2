#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"

void diag_scan(int mat [][N3], int arr [])
{

    // This is the first programming (scripting) question without any initial setup as hints.

    // This is also the first question requiring you to come up with an algorithm on paper 
    // with mathematical analysis before implementing the code.

    // High Level Hint:
    //  Assume a 3x3 square matrix, look at the SUM of the row and column indices of each element.
    //  You should be able to see a numerical pattern after doing so.

    int i,j; 
    int row = 0;
    int col = 0;
    
    int index = 0;
    // int cnt = 0;
    
    while(row<N3 && col<N3){
        for(i = row, j = col; i <N3 && j >=0 ; i++, j--)
        {
            arr[index] = mat[i][j];
            index++;
        }
        

        if (col == N3 - 1)
        {
            row++;
        }
        else {
            col++;
        }
    }

        
    

}
