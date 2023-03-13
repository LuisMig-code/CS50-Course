#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // Recive the name os user
    string resposta = get_string("Qual seu nome? ");
    
    // Greet user
    printf("Hello , %s !\n", resposta);
}