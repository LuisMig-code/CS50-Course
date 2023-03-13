#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    int n = get_int("H: ");
    
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++){
            if(i + j >= n-1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n*2 ; j++){
            
            if(j<n && i + j >= n-1) {
                printf("#");
            }
            else if(j == n) 
            {
                printf("|");
            }
            else if(j>n && j <= 2*i) {
                printf("#");
            }
            else 
            {
                printf(" ");
            }
        
        }
        printf("\n");
    }
}
