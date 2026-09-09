#include <stdio.h>

int main() {
    int target;
    int nums[5] = {1, 2, 3, 4, 5};
    int numsSize = 5;
    printf("Enter the number for search: \n");
    scanf("%d", &target);
    int low = 0;
    int high = numsSize - 1;
    int mid = 0;

    while(low <= high){
        mid = (low + high) / 2;

        if(nums[mid] == target){
            printf("%d exists in nums and its index is %d", target, mid);
            return mid;
        }

        else if(nums[mid] > target){
            high = mid - 1;
        }

        else if(nums[mid] < target){
            low = mid + 1;
        }
    }
    return -1;
}

