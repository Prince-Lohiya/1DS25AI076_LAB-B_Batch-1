#include <stdio.h>

void diagonalDifference(int rows, int cols, int a[rows][cols]){
    int primary = 0;
    int secondary = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                primary += a[i][j];
            }
            else if(i + j == rows - 1){
                secondary += a[i][j];
            }
        }
    }
    if (primary > secondary){
       printf("Difference between primary and secondary diagonal is %d", primary - secondary);
    }
    else{
        printf("Difference between primary and secondary diagonal is %d", secondary - primary);
    }
}

int main() {
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3;
	int cols = 3;
	diagonalDifference(rows, cols, a);
}



