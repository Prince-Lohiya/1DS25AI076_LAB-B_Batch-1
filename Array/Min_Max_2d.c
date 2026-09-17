#include <stdio.h>

void MinMax(int rows, int cols, int a[rows][cols]){
    int min = a[0][0];
    int max = a[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (max < a[i][j]){
                max = a[i][j];
            }
            else if (min > a[i][j]){
                min = a[i][j];
            }
        }
    }
    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
}


int main() {
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3;
	int cols = 3;
	MinMax(rows, cols, a);
}



