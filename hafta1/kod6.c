#include <stdio.h>

int main(){
    int sayi_1 = 10;
    int sayi_2 = 3;

    double toplama_islemi = sayi_1 + sayi_2;
    printf("%lf\n",toplama_islemi);

    int cikarma_islemi = sayi_1 - sayi_2;
    printf("%d\n",cikarma_islemi);

    float carpma_islemi = sayi_1 * sayi_2;
    printf("%f\n",carpma_islemi);

    int tam_sayi_bolme_islemi = sayi_1 / sayi_2; //sonuc 3.0000
    printf("%d\n",tam_sayi_bolme_islemi);

    double ondalikli_sayi_bolme_islemi = (double) sayi_1 / (double) sayi_2;
    printf("%lf\n",ondalikli_sayi_bolme_islemi);

    return 0;
}