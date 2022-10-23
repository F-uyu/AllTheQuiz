#include <stdio.h>
#include <stdlib.h>

int MAX = 10;

int main(){
    int guesses, actualguess, option, maxnumber;
    int win = 0;
    int random;
    char c[2];
    do{
        printf("Press 1 to play the game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        scanf("%d", &option);
        switch (option){
            case 1:
                guesses = 0;
                random = rand() % MAX + 1;
                do{
                    scanf("%s", &c);
                    if (c[0] == 'q'){
                        break;
                    }
                    else{
                        actualguess = atoi(c);
                        if (actualguess < random){
                            printf("You are too low!");
                        }
                        else if (actualguess >random){
                            printf("You are too high!");
                        }
                        else{
                            printf("Nice, you got it right!\n");
                            win++;
                            break;
                        }

                    }
                    guesses++;
                } while (c[0] != 'q' || random == actualguess);
                break;
            case 2:
                printf("Enter a new max number");
                do{
                    scanf("%d", &maxnumber);
                    if (maxnumber < 0 || maxnumber > MAX){
                        printf("Please try again");
                    }
                    else{
                        MAX = maxnumber;
                    }
                } while (maxnumber < 0 || maxnumber > MAX);
                printf("Number generated between 0 and MAX\n");
                break;
            case 3:
                printf("Thanks for playing!");
        }
    }while (option != 3);
    return 0;
}