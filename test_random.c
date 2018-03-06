#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    srand(time(NULL));
    for(i = 0 ; i < 5 ; i++)
        printf("#%d: %d\n", i, rand());
    return 0;
}