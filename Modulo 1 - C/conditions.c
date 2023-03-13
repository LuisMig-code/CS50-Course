#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // Get numbers from user
    int x = get_int("X: ");
    int y = get_int("Y: ");
    
    if(x<y) {
        printf("X é menor que Y\n");
    }
    else if(x>y) {
        printf("X é maior que Y\n");
    } else {
        printf("X e Y são iguais");
    }
}