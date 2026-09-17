#include <stdio.h>

void sumAll(int rows, int cols, int a[rows][cols]){
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += a[i][j];
        }
    }
    printf("Sum of all the element in a array is %d\n", sum);
}

int main() {
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3;
	int cols = 3;
	sumAll(rows, cols, a);
}



