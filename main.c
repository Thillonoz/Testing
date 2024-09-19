#include <stdio.h>

int main (){
    int inputX, inputY;
    printf("***************\n");
    printf("Input the width\n");
    printf("and the height \n");
    printf("of the square. \n");
    printf("***************\n");

    scanf("%d %d", &inputX, &inputY);
    printf(" ");
    for (int i = 1;i <= inputX;i++ ){
        printf("-");
        
    }
    printf("\n");
        for (int j = 1;j <= inputY;j++){
            printf("|");

        for (int k = 1;k<=inputX;k++){
            printf(" ");
        }
        if (j<= inputY){
            printf("|\n");
            }
        }
    printf(" ");
    for (int i = 1;i <= inputX;i++ ){
        printf("-");
        
    }
    printf("\n");

    return 0;
}