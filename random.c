#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int random, key = 0;
    srand(time(NULL));
    random = rand();
    printf("Give secret number: ");
    scanf("%d", &key);
    if( (key ^ random) == 0xdeadbeef ){
        printf("You got it!!\n");
        return 0;
    }
    printf("No, keep trying.\n");
    return 0;
}