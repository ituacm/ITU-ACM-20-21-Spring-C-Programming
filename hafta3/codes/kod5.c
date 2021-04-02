#include <stdio.h>
#include <stdlib.h>

void ortalama(int array[], int size){
    int toplam = 0;

    for (int i = 0; i < size; i++){
        toplam += array[i];
    }

    printf("%lf\n",(double)(toplam / (double) size));
}

int main(){

    int size = 0;
    int array_2[100];

    for(int i = 0;i < 5;i++){
        printf("array_2 %d. elemani giriniz: ",i+1);
        scanf("%d", &array_2[i]);
        size++;
    }

    for (int i = 0; i < size; i++){
        printf("array_2 %d. elemani: %d\n",i+1,array_2[i]);
    }

    ortalama(array_2, size);
    
return EXIT_SUCCESS;
}