#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Qual o seu nome? ");
    printf("Hello , %s\n" , name);
}