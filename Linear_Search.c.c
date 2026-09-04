#include <stdio.h>

int main() {
	int arr[5] = {10, 7, 25, 57, 20};
	int key;
	printf("Enter the number for search: \n");
	scanf("%d", &key);
	for(int i = 0; i < 5; i++){
	    if(key == arr[i]){
	        printf("Element found at index %d", i);
	        key = 1;
	    }
	}
	if(key != 1){
	    printf("Element not found");
	}
}

