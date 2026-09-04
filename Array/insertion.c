#include <stdio.h>

int main() {
    int arr[6] = {10, 7, 25, 57, 20};
    int num;
	printf("Enter the number for add: \n");
	scanf("%d", &num);
	int pos;
	printf("Enter the index: \n");
	scanf("%d", &pos);
	for(int i = 4; i >= pos; i--){
	    arr[i + 1] = arr[i];
	}
	arr[pos] = num;
	for(int i = 0; i < 6; i++){
	    printf("%d\n", arr[i]);
	}
}

