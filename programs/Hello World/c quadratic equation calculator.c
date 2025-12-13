#include <stdio.h>
#include <math.h>
// Function to calculate the roots of a quadratic equation
int main(void) {
     
     //Three conditions
     //discriminant > 0 real and different roots
     //discriminant = 0 equal and same roots
     //discriminant < 0 complex and im

  double a,b,c;
  double discriminant,root1,root2;
  char choice;
    //Enter the values
  do {
    printf("Enter the values for a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
  
    // Ensure 'a' is not zero to avoid division by zero in quadratic formula
  if (a==0) {
    printf("Coefficient 'a' cannnot be zero. Please enter another none zero value\n");
  } 
  else {
    //Declare and calculate the discriminant
    discriminant =((b*b) - (4*a*c));
  }
    if (discriminant > 0) {
        root1 = ( -b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

          printf("Root 1: %.2f\n", root1);
          printf("Root 2: %.2f\n", root2);
          printf("Roots are real and different.\n");
        }
    else if (discriminant == 0) {
        root1=root2 = -b / (2*a); //since both roots are equal

          printf("Root 1 and Root 2 are equal: %.2f\n", root1);
          printf("Roots are real and same.\n");
        }
    else if (discriminant < 0) {
          // For complex roots, we need to handle the imaginary part
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        root1 = realPart;
        root2 = imaginaryPart;
         
          printf("Roots are complex and different.\n");
          printf("Root 1 (Real part): %.2f + i%.2f\n", root1, root2);
          printf("Root 2 (Imaginary part): %.2f - i%.2f\n", root1, root2);
        }
  printf("\nDo you want to calculate again? (y/n): ");
  scanf(" %c", &choice);

  } 
  while (choice =='Y' || choice =='y');
  
   return 0;
}
