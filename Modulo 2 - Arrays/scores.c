#include <stdio.h>
#include <cs50.h>

const int TOTAL = 3;


float media(int tam , int arr[]);

int main(void) 
{
    int scores[TOTAL];
    for(int i=0 ; i<TOTAL ; i++){
        scores[i] = get_int("Score[%i]: ",i);
    }
    
    
    printf( "Média: %f\n",  media(TOTAL , scores) );
}

float media(int tam , int arr[]) 
{
    int sum = 0;
    for(int i=0 ; i<tam ; i++) {
        sum += arr[i];
    }    
    
    return sum/(float)tam;
} 