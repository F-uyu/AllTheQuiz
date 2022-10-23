#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    srand(time(NULL));
    char name[4] = {"Salad", "Soup", "Sandwich", "Pizza"};
    double price[4] = {9.95, 4.55, 13.25, 22.35};
    long tax = argv[1];
    long tip = argv[2];
    int r = rand() % 4;
    char item = name[r];
    double price1 = price[r];
    double test = price[r] * tip;
    printf("The meal cost is %d\n", price1);
    printf("The tip amount is %d\n", price1 * tip);
    printf("The tax amount is %d\n", price1 * tax);
    printf("The total meal is %d\n", price1 + price1 * tip + price1 * tax);

    
    
    
}