#include <stdio.h>
int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;
    int i = 1;
    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[j-1]) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter values (sorted order):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    int k = removeDuplicates(nums, size);
    printf("Unique count = %d\n", k);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
