#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

typedef struct {
    char *item;
    double price;

}Item, *PtrtoItem;

Item Itemtable[] = 
{
    {"Salad", 9.95},
    {"Soup", 4.55},
    {"Sandwich", 13.25},
    {"Pizza", 22.35},
};

double getcost(PtrtoItem thing, int num){
    return thing[num].price;
}
char* getname(PtrtoItem thing, int num){
    return thing[num].item;
}
//start
int main(int argc, char *argv[]){
    if (argc != 3){
        printf("You have too less or too many arguments. First argument is tax. The second is tip.");
        exit(1);
    }
    srand(time(NULL));
    double tax = atof(argv[1])/100;
    double tip = atof(argv[2])/100;
    int r = rand() % 4;
    double price = getcost(Itemtable, r);
    printf("The price is %0.2f\n", price);
    printf("The tax is %0.2f\n", price * tax);
    printf("The tip is %0.2f\n", price * tip);
    printf("The total bill is %0.2f\n", price + price * tax + price * tip);
    
    return 0;
}