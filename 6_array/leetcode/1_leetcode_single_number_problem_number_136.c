#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int answer = 0;
    for (int i = 0; i < numsSize; i++) {
        answer ^= nums[i];
    }
    return answer;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int nums[n]; 

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int result = singleNumber(nums, n);

    printf("The single number is: %d\n", result);

    return 0;
}
