#include <stdio.h>

int main() {
    int arr[6] = {10, 7, 25, 57, 20};
	int pos;
	printf("Enter the index: \n");
	scanf("%d", &pos);
	for(int i = pos; i <= 5; i++){
	    arr[i] = arr[i + 1];
	}
	for(int i = 0; i < 6; i++){
	    printf("%d\n", arr[i]);
	}
}

