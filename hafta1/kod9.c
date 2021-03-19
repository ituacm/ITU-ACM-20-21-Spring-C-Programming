#include <stdio.h>

int main()
{
    int var1 = 0;

    var1 += 11;
    printf("%d\n", var1);

    var1 -= 13;
    printf("%d\n", var1);

    var1 *= 15;
    printf("%d\n", var1);

    var1 /= 1.0;
    printf("%d\n", var1);

    return 0;
}