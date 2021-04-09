#include <stdio.h>

int main(){

    int x[5] = {1, 2, 3, 4, 5};

    int* ptr;

    // ptr'a x dizisinin 2. elemaninin adresi atandi
    ptr = &x[1]; // 2

    printf("*ptr = %d\n", *ptr);

    ptr++;   // 3

    printf("*ptr = %d \n", *ptr); // 3

    printf("*(ptr+1) = %d \n", *(ptr + 1)); // 4

    printf("*(ptr-1) = %d\n", *(ptr - 1)); // 2

    return 0;
} 
