#include <stdio.h>

int main() {
    int n[100];
    printf("Input the values of N: \n");
    scanf("%d", &n[100]);
    for(int i = 0; i=n[100]; i++){
        printf("The numbers in N are: %d\n", &n[i]);
    }
    return 0;
}