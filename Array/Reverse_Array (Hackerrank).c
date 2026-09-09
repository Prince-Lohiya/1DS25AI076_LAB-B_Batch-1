#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < n/2; i++){
        int temp;
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    return a;
}
