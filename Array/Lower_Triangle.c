#include <stdio.h>

void lower(int rows, int cols, int a[rows][cols]){
    printf("The lower Triangular\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (i >= j){
                printf("%d ", a[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3;
	int cols = 3;
	lower(rows, cols, a);
}



