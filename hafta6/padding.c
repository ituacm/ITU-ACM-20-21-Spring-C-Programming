#include <stdio.h>
#include <stdlib.h>

struct /*__attribute__((__packed__))*/ students   //  by default compiler sets padding on, with this we set packing on
{
    float a; // 4 byte
    char c[2];  // 1 byte per
    double d; // 8 byte
};
 

int main(){

    struct students* a = (struct students*) malloc(sizeof(struct students));

    printf("%ld \n", sizeof(*a));   // when padding is on compiler allocates the memory according to the  
                                    //  size of biggest data type in order to proccess faster. 
                                    // eg. if there is only char and int -> allocates the memory 4 byte by 4 byte 
    return 0;                       //  but if there is double, it allocates the memory 8 byte by 8 byte.
} 
