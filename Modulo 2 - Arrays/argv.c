#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main( int argc , string argv[] ) 
{
    if(argc == 2) {
        printf("hello, %s\n" , argv[1]);
        for(int i=0 , n= strlen(argv[1]) ; i<n ; i++) {
            printf("%c " , argv[1][i]);
        }
    }    else {
        printf("Hello world!");
    }
    printf("\n");
}