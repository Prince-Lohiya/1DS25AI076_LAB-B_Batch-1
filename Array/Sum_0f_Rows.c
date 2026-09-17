#include <stdio.h>

void sumRows(int rows, int cols, int a[rows][cols]){
    printf("The sum of rows\n");
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += a[i][j];
        }
        printf("%d", sum);
        printf("\n");
    }
}

int main() {
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3;
	int cols = 3;
	sumRows(rows, cols, a);
}



