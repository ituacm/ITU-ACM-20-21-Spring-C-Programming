#include <stdio.h>

int toplama(int x, int y){
    int sonuc = x+y;
    return sonuc;
}

int main(){
    int x = 10, y = 3;
    printf("%d",  /*sonuc=13 */ toplama(10, 3));
    return 0;
}