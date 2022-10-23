#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    int count = 0;
    srand(time(NULL));
    int isMagic = 0;
    int check[10] = {0, 0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
    int arrayTest[3][3] = {
        {6, 1, 8},
        {7, 5, 3},
        {2, 9 ,4}
    };
    do{
        /*for (int i = 0; i <3; i++){
            for (int j = 0; j < 3; j++){
                int randomnumber = (rand() % 9) + 1;
                arrayTest[i][j] = randomnumber;
            }
        }*/
        for (int i  = 0; i < 3; i++){
            for (int j =0 ; j < 3; j++){
                int num = arrayTest[i][j];
                check[num] = check[num] + 1;
                if (check[num] > 1){
                    isMagic = 1;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            int check = 0;
            for (int j = 0; j < 3; j++){
                check += arrayTest[i][j];
            }
            if (check == 15){
                isMagic = 0;
            }
            else{
                isMagic = 1;
            }
        }
        for (int i = 0; i < 3; i++){
            int check = 0;
            for (int j = 0; j < 3; j++){
                check += arrayTest[j][i];
            }
            if (check == 15){
                isMagic = 0;
            }
            else{
                isMagic = 1;
            }
        }
        if (isMagic == 0){
            if ((arrayTest[0][0] + arrayTest[1][1] + arrayTest[2][2]) == (arrayTest[0][2] + arrayTest[1][1] + arrayTest[2][0])){
                isMagic = 0;
            }
            else{
                isMagic = 1;
            }
        }
        for (int i = 0; i <3; i++){
            for (int j = 0; j < 3; j++){
                printf("%d | ", arrayTest[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < 10; i++){
            check[i] = 0;
        }
        if (isMagic == 1){
            count++;
        }
    
    } while (isMagic != 0);
    
    
    return 0;
}