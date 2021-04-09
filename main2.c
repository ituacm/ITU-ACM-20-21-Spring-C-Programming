#include <stdio.h>

int main(){

    int a = 10; // ilk deger

    int *a_pointer = &a; // a'nin adresi

    printf("a'nin ilk degeri: %d\n", a); 

    *a_pointer = 20; //a'nin degeri adresi uzerinden degistirildi
    
    printf("a'nin degistirilmis degeri: %d\n", a); 

    return 0;
} 