#include <stdio.h>

int main() {
    int candles[4] = {4, 4, 1, 3};
    int n = 4;
    int tall = candles[0];
    int count = 0;
    for(int i = 0; i < n; i++){
        if(tall < candles[i]){
            tall = candles[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(tall == candles[i]){
            count++;
        }
    }
    printf("The tallest candles are %d units, and there are %d of them", tall, count);
    return count;
}