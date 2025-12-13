#include <stdio.h>
#include <math.h>
int main() {
    // Code to input the coordinates of two points and show their distance apart
    int x1, y1, x2, y2;
    float dist;
    printf("Input the values of coordinates x1 and y1: \n");
    scanf("%d %d", &x1,&y1);
    printf("Input the values of coordinates x2 and y2: \n");
    scanf("%d %d", &x2,&y2);
    //Distance between the two points
    dist= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between the two coordinates is: %.2f\n", dist);

    //Code to input N numbers from a console and display the first numbers of the fibonacci series
    int t1=0, t2=1, nterm=0;
    printf("Fibonacci series all the way to 300: \n");    
    while (t1<=300) {
        
        printf("%d\n", t1);
        nterm= t1 + t2;
        t1=t2;
        t2=nterm;

    }
    
    return 0;
}
// finally!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

