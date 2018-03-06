#include <stdio.h>

int x = 0;
int foo(){
    int x = 3840;
    {
        return x;
    }
}

// int x = 0;
// int foo(){
//     int x = 3840;
//     {
//         extern int x;
//         return x;
//     }
// }

int main(){
    printf("x = %d\n", foo());
    return 0;
}