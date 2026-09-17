#include <stdio.h>

void compareTriplet(int n, int m, int a[n], int b[m]){
    int alice = 0;
    int bob = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            alice++;
        }
        else if(a[i] < b[i]){
            bob++;
        }
    }
    int result[2];
    result[0] = alice; 
    result[1] = bob; 
    printf("alice : bob\n");
    printf("  %d   :  %d ", result[0], result[1]);
}

int main() {
	int a[3] = {1, 2, 3};
	int b[3] = {3, 2, 1};
	int n = 3;
	int m = 3;
	compareTriplet(n, m, a, b);
}



