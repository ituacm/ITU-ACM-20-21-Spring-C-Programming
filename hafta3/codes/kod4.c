#include <stdio.h>

int global = 16;

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

void toplama(int x){
    int sonuc = x+global;
    printf("%d\n",  sonuc);
}

int main(){
    int x = 10;
    int y = 0;
    
    asal(global);
    toplama(x);

    printf("%d",  y);
    return 0;
}