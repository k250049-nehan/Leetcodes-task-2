#include <stdio.h>
void moveZeroes(int nums[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    while (j < n) {
        nums[j] = 0;
        j++;
    }
}
int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int nums[size];
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    moveZeroes(nums, size);
    printf("Result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
