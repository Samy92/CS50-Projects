#include <stdio.h>
#include <string.h>

typedef struct{
    char name[10];
    char number[14];
} person;

int main(void){
    person people[4];

    strcpy(people[0].name, "Max");
    strcpy(people[0].number, "310-222-1000");

    strcpy(people[1].name, "Emma");
    strcpy(people[1].number, "310-222-1001");

    strcpy(people[2].name, "Mario");
    strcpy(people[2].number, "310-222-1002");

    strcpy(people[3].name, "Luigi");
    strcpy(people[3].number, "310-222-1003");
    

    for (int i = 0; i < 4; i++){
        if (strncmp(people[i].name, "Luigi", 4) == 0){
            printf("The name was found\n");
            printf("Name: %s\n", people[i].name);
            printf("Phone Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("The name wasn't found\n");
    return 1;
}