#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("phonebook.csv" , "a");
    if(file == NULL) {
        return 1;
    }
    
    char *name = get_string("Nome: ");
    char *number = get_string("Número: ");
    
    fprintf(file , "%s,%s\n" , name , number);
    fclose(file);
}