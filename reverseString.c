#include <stdio.h>
void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}
int main() {
    int size;
    printf("Enter size of string array: ");
    scanf("%d", &size);
    char s[size];
    printf("Enter characters:\n");
    for(int i = 0; i < size; i++) {
        scanf(" %c", &s[i]);
    }
    reverseString(s, size);
    printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%c ", s[i]);
    }
    printf("\n");
    return 0;
}
