#include <stdio.h>

/* gcc -o basic_overflow basic_overflow.c -fno-stack-protector */

int main(){
    char pwd[8] = "NISRA";
    char input[8];
    printf("Give me some input: ");
    scanf("%s", input);
    if(strcmp(pwd, "admin") == 0)
        printf("Yes you pass it!\n\n");
    else printf("No, keep trying.\n\n");
    return 0;
}
