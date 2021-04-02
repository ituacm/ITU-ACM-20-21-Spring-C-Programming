#include <stdio.h>
#include <stdlib.h>

int absolute(int x){
    int y = 0;
    if (x < 0){
        y = -x;
    }
    else {
        y = x;
    }
    return y;
}

void increment(int x){
    x++;
    printf("%d\n", x);
}


int main(){
    int x = 12;
    increment(x);
    printf("%d\n", x);
    return 0;
}