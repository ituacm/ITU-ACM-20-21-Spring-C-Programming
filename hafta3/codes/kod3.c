#include <stdio.h>

void asal(int x){
    int counter = 0;

    for (int i=2; i < x; i++){
        if (x % i == 0){
            counter++;
        }
    }

    if (counter == 0){
        printf("ASAL\n");
    }
    else {
        printf("ASAL DEGIL\n");
    }
    return;
}

int main(){

    asal(10);
    return 0;
}