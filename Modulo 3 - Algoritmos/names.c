#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    
    string names[] = {"Luis" , "Miguel" , "Rafael" , "Jorge" , "Percy" , "Ruy" , "Marco"};
    
    for(int i = 0 ; i<7 ; i++) {
        if( strcmp(names[i] , "Ruy") == 0 ) {
            printf("Found!\n");
            return 0;
        }
    }
    
    printf("Not Found!\n");
    return 1;
}