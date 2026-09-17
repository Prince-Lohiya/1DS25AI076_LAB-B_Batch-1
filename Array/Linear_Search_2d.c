#include <stdio.h>

void linearSearch(int rows, int cols, int a[rows][cols], int key){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (key == a[i][j]){
                printf("the key is found at index %d %d\n", i, j);
                return;
            }
        }
    }
}

int main() {
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3;
	int cols = 3;
	int key = 5;
	linearSearch(rows, cols, a, key);
}



