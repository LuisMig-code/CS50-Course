#include <stdio.h>
#include <cs50.h>

// Prototype
int get_negative_int(void);

int main(void)
{
    // Pega um valor negativo do usuário
    int i = get_negative_int();
    printf("%i\n",i);
}

int get_negative_int(void){
    int n;
    do{
        n = get_int("Negative integer: ");
    }
    while(n > 0);
    return n;
}