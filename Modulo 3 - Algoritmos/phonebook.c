#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    string name;
    string number;
} person;

const int NUMBER = 10;

int main(void) {
    person people[NUMBER];
    
    people[0].name = "Luís";
    people[0].number = "+55 (98) 98752-1523";
    
    people[1].name = "Teste";
    people[1].number = "+55 (11) 91234-5678";
    
    for(int i=0 ; i<2 ; i++) {
        if(strcmp(people[i].name , "Luís") == 0) {
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    
    printf("Not Found\n");
    return 1;
}