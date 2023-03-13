#include <stdio.h>
#include <cs50.h>
#define true 1

int main(void)
{
     // TODO: Solicite o valor inicial ao usuário
     int initial = get_int("Valor inicial: ");

     // TODO: Solicite o valor final ao usuário
     int end = get_int("Final: ");
     
     printf("Inicial: %i | Final: %i" , initial , end);

     // TODO: Calcule o número de anos até o limite
     int years = 0;
     while((int)initial < (int)end) {
         int mortas = (int)(initial/3);
         int nascidas = (int)(initial/4);
         
         initial = initial - mortas + nascidas;
         
         years++;
     }

     // TODO: Imprima o número de anos
     printf("Anos: %i",years);

}