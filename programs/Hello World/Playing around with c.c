#include <stdio.h>
#include <stdbool.h>

int main() {

    int myNumx = 15;
    int myotherNumx = 23;
    myNumx = 25;
    myotherNumx=myNumx;
    
    float myfloatNum = 6.9;
    long double mydoublenum = 5.9;
    char myletter = 'A';

    printf ("\nMy favorite number is %d and my favorite letter is %c\n", myNumx, myletter);
    printf ("My favorite decimal number is: %.2f\n", myfloatNum);
    printf ("My favorite letter is: %c\n", myletter);
    printf ("Age: %d\n\n", 18);

    printf ("%.2Lf\n\n", mydoublenum);           //(Test for double (success)
    
    int x = 4, y = 6, z = 10;          
    printf ("%d\n\n", x + y + z);     //This one right here is declaring multiples variables
    /*The previous one i learnt was;
    int x = 5;
    int y = 6;
    int sum = x + y;
    print f ("%d", sum);*/
    // had to remove this one though cause it seems both can't function together.
    /*The second part of declaring multiple variables;
    int x, y, z;
    int x = y = z = 50;
    printf ("%d", x + y + z);*/

    int length = 4e1;
    int width = 5e1;
    int area = length * width;

    printf ("Length is: %d\n", length);
    printf ("Width is: %d\n", width);
    printf ("Area of the rectangle: %d\n\n", area);

    printf ("%lu\n", sizeof(myletter));
    printf ("%lu\n", sizeof(myNumx));
    printf ("%lu\n", sizeof(myfloatNum));
    printf ("%lu\n\n", sizeof(mydoublenum));

    int items = 50;
    float cpi = 9.99;
    float Total_cost = items * cpi;
    char currency = '$';

    printf ("Items: %i\n", items);
    printf ("Cost per items: %.f%c\n", cpi, currency);
    printf ("Total cost: %.f%c\n", Total_cost, currency);

    int mainscore = 400;
    int userscore = 275;
    float percentage = (float) userscore / mainscore * 100;
    printf ("This user's percentage is: %.2f\n\n", percentage);

    char greeting[] = "Hello!";
    printf("%c\n\n", greeting[5]);

    char greetings[] = "Hello World!";
	greetings[0]= 'D';
  	printf("%s\n\n", greetings);

    char carName[] = "Audi";
    int i;
  
    for (i = 0; i <= 4; ++i) {
    printf("%d\n", carName[i]); //ASCII NUMBERS CAUSE OF THE %d FUNCTION
    }
    printf("\n");

    char carname[] = "Audi";
    int j;
  
    for (j = 0; j < 4; ++j) {
    printf("%C\n", carname[j]); //letters thanks to the %c function
    }
    printf("\n");

    bool isprogrammingfun = true;
    bool isfishtasty = false;
    printf("%d\n", isprogrammingfun);
    printf("%d\n\n", isfishtasty);

    int a = 7;
    int b = 5;       
    printf("%d\n\n", b < a);

    printf("%d,", 10 == 15);
    printf("%d,", 10 == 10);    //comparison of numbers using boolean
    printf("%d.\n\n", 10 == 11);

    bool ischickentasty = true;
    bool ispizzatasty = true;
    printf ("%d\n\n", ischickentasty==ispizzatasty);

    int myAge = 25;
    int votingAge = 18;
    if (myAge >= votingAge) {
    printf("You are allowed to vote.");
    } else {
        printf("You are not allowed to vote.");
    }
    printf("\n\n");
    
    int time = 20;
    if (time < 10) {
    printf("Good morning.\n\n");
    } else if (time < 20) {
    printf("Good day.\n\n");
    } else {
        printf("Good evening.\n\n");
    }

    int _x = 0;
    while (_x< 5) {
    printf("%d\n", _x);
    _x++;
    } printf("\n\n");

    int countdown;
    printf("Countdown starts from: ");
    scanf("%d", &countdown);

    while (countdown >= 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy Birthday! Otanjobi omedetou!\n\n");

    int number;
    do {
    printf("Enter a positive number: ");
    scanf("%d", &number);
    } 
    while (number> 0);

    
    
    return 0;
}