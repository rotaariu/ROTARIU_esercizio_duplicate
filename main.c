#include <stdio.h>
#include <stdlib.h>
char* duplicate(char* s);

int main(void) {
    char* str = "e dio lo gnomo\n";
    char* str2 = duplicate(str);
    printf("%s",str);
    printf("%s",str2);
    return 0;
}
char* duplicate(char* s) {
    int leng = 1;
    for (int i=0; s[i]!='\0';i+=sizeof(char)) {
        leng++;
    }
    char* ps2 = malloc(leng*sizeof(char));
    for (int i=0; i<leng; i++) {
        ps2[i*sizeof(char)] = s[i];
    }
    return ps2;
}