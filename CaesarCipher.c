#include <stdio.h>
#include <string.h>

int main(void){
    int diff;   
    char Ptext[50];
    char Ctext[50];
    printf("Enter a key: ");
    scanf("%i", &diff);
    getchar();
    printf("plaintext: ");
    fgets(Ptext , 50 , stdin);
    for (int i = 0; Ptext[i] != '\0'; i++){
        if(Ptext[i] >= 'a' && Ptext[i] <= 'z'){
            Ctext[i] = Ptext[i] + diff;
            if(Ctext[i] > 'z'){
                Ctext[i] = Ctext[i]-26;
            }
        }
        else if (Ptext[i] >= 'A' && Ptext[i] <= 'Z'){
            Ctext[i] = Ptext[i] + diff;
            if(Ctext[i] > 'Z'){
                Ctext[i] = Ctext[i]-26;
            }
        }else if(Ptext[i] = ' '){
            Ctext[i] = Ptext[i];
        }
    }
    printf("\ncyphertext: %s\n", Ctext);
}