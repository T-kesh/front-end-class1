#include <stdio.h>

int main(void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int found = 0;

    // Count up to num using steps of 2
    for (int i = 0; i <= num; i = i + 2) {
        if (i == num) {
            found = 1;
            printf("Even\n");
            break;
        }
    }
     if (found == 0) {
        printf("Odd\n");
        }

    return 0;
}