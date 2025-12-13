#include <stdio.h>

int main() {
    int numbers[100], n, i, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0]; // assume the first number is the largest

    for(i = 1; i < n; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}