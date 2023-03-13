#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = malloc(4);
    s[0] = 'h';
    s[1] = 'i';
    s[2] = '!';
    s[3] = '!';
    
    printf("%s\n",s);
    free(s);
}