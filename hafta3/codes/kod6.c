#include <stdio.h>
#include <stdlib.h>


int main(){

    int array[10][10];

    for(int i = 0;i < 2;i++){
        for (int j = 0; j < 2; j++){
            printf("array_2 %d. elemani giriniz: ",i+1);
            scanf("%d", &array[i][j]);
        }
    }

    for(int i = 0;i < 2;i++){
        for (int j = 0; j < 2; j++){
            printf("%d\n", array[i][j]);
        }
        printf("\n");
    }


return EXIT_SUCCESS;
}