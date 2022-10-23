#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    srand(time(NULL));
    int randomnumber = rand() % 10;
    int isMagic = 0;
    int check[10];
    int arrayTest[3][3] = {
        {4, 9 , 2},
        {3, 5, 7},
        {8, 1, 6}
    };
    for (int i  = 0; i < 3; i++){
        for (int j =0 ; j < 3; j++){
            int num = arrayTest[i][j];
            check[num]++;
            if (check[num] > 1){
                printf("Not a Magic Square");
            }
        }
    }
    isMagic = 0;
    if (isMagic == 0){
        if ((arrayTest[0][0] + arrayTest[1][1] + arrayTest[2][2]) == (arrayTest[0][2] + arrayTest[1][1] + arrayTest[2][0])){
            isMagic = 0;
        }
        else{
            isMagic = 1;
        }
    }
    
}