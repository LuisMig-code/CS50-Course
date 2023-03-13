#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    char c = get_char("Do you agree? ");
    
    if( c == 'y' || c == 'Y' ) {
        printf("AGREED!\n");
    }
    else if( c == 'n' or c == 'N') {
        printf("NOT AGREED!\n");
    }
}