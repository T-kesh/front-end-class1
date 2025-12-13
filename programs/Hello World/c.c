#include <stdio.h>

int main() {
    int numbers[100], n, i;
    float sum, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // accumulate the sum
    }

    average = sum / n;

    printf("The average is: %.2f\n", average);

    return 0;
}


