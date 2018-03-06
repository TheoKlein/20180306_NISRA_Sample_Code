#include <stdio.h>

int main(){
    char s[] = "NISRA";
    int a[] = { 1, 2, 3, 4, 5 };

    printf("s[2] = %c, 2[s] = %c\n", s[2], 2[s]);
    printf("a[3] = %d, 3[a] = %d\n", a[3], 3[a]);
    printf("%c, %c\n", "FOO"[2], 2["FOO"]);
    return 0;
}