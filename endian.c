#include <stdio.h>

int main() {
    int n = 0x1234ABCD;
    char *ptrNum = (char *) &n;

    printf("Let n = %X\n", n);
    printf("n is allocated at:\n");
    printf(" Address: %p %p %p %p\n   Value: ",
        (void *) ptrNum, (void *) ptrNum + 1, (void *) ptrNum + 2, (void *) ptrNum + 3);
    printf("%14X %14X %14X %14X\n",
        (unsigned char) *ptrNum++,
        (unsigned char) *ptrNum++,
        (unsigned char) *ptrNum++,
        (unsigned char) *ptrNum++);
    return 0;
}