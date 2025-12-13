#include <stdio.h>

int main (void) {
    //SHOP Cart program
    char item [100] = "";
    float price;
    int quantity;
    double total;

    printf("What item do you want to buy: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for each item: ");
    scanf("%f", &price);

    printf("How many would you like to buy: ");
    scanf("%d", &quantity);

    total= price * quantity;
    printf("You have bought %d %s\n", quantity, item);
    printf("TOTAL AMOUNT: $%.2lf\n", total);

    return 0;
}