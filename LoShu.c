#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    int count = 0;
    srand(time(NULL));
    int isUnique = 0;
    int isColumn = 0;
    int isRow = 0;
    int isDia = 0;
    int check[10] = {0, 0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
    int arrayTest[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3 ,8}
    };
    do{
        for (int i = 0; i <3; i++){
            for (int j = 0; j < 3; j++){
                int randomnumber = (rand() % 9) + 1;
                arrayTest[i][j] = randomnumber;
            }
        }
        for (int i  = 0; i < 3; i++){
            for (int j =0 ; j < 3; j++){
                int num = arrayTest[i][j];
                check[num] = check[num] + 1;
                if (check[num] > 1){
                    isUnique = 1;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            int tester = 0;
            for (int j = 0; j < 3; j++){
                tester += arrayTest[i][j];
            }
            if (tester == 15){
                isRow = 0;
            }
            else{
                isRow = 1;
                break;
            }
        }
        for (int i = 0; i < 3; i++){
            int tester = 0;
            for (int j = 0; j < 3; j++){
                tester += arrayTest[j][i];
            }
            if (tester == 15){
                isColumn = 0;
            }
            else{
                isColumn = 1;
                break;
            }
        }
        if (isUnique == 0){
            if ((arrayTest[0][0] + arrayTest[1][1] + arrayTest[2][2]) == (15) && (15) == (arrayTest[0][2] + arrayTest[1][1] + arrayTest[2][0])){
                isDia = 0;
            }
            else{
                isDia = 1;
            }
        }
        
        if ((isUnique + isRow + isColumn + isDia) != 0){
            count++;
        }
        
    
    } while ((isUnique + isRow + isColumn + isDia) != 0);
    
    for (int i = 0; i <3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d | ", arrayTest[i][j]);
        }
        printf("\n");
    }
    printf("%d", count);
    return 0;
}