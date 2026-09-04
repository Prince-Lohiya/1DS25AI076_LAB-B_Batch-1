#include <stdio.h>

int main() {
	int arr[5] = {10, 7, 25, 57, 20};
	int max = arr[0];
	int min = arr[0];
	for(int i = 0; i < 5; i++){
	    if(max <= arr[i]){
	        max = arr[i];
	    }
	    if(min >= arr[i]){
	        min = arr[i];
	    }
	}
    printf("Max value is %d\n", max);
    printf("Min value is %d\n", min);
}

