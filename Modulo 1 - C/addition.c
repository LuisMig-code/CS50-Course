#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    long x = get_long("X: ");
    long y = get_long("Y: ");
    
    printf("Soma: %li\n" , x+y);
}