#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // Get numbers from user
    int x = get_int("X: ");
    int y = get_int("Y: ");
    
    // Divide x by y
    float z = (float)x/ (float)y;
    
    printf("Divisão: %f\n" , z);
}