#include<stdio.>
int main() {
    int num, absValue;
    printf("Enter a number: ");
    scanf("%d", &num);
    absValue = (num < 0) ? -num : num;
    printf("Absolute value: %d\n", absValue);
    return 0;
}

