#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char Alph[26];
    char InAlph[26];
    char Word[50];
    char CiWord[50];

    Alph[0] = 'A';
    for (int i = 0; i <26; i++ ){
        Alph[i] = Alph[0] + i;
    }

    printf("Enter key: ");
    scanf("%s", InAlph);
    if(strlen(InAlph) != 26){
        do{
            printf("Key must contain 26 characters.\n");
            printf("Try Again : ");
            scanf("%s", InAlph);
        }while(strlen(InAlph) != 26);
    }
    getchar();
    printf("plaintext: ");
    fgets(Word , 50 , stdin);

    for(int i = 0; Word[i] != '\0'; i++){
        if(Word[i] >= 'A' && Word[i] <= 'Z'){
            for(int j =0; j < 26 ; j++){
                if(Word[i] == Alph[j]){
                    CiWord[i] = InAlph[j];
                }
            }
        }else if(Word[i] >= 'a' && Word[i] <= 'z')
        {
            for(int j =0; j < 26 ; j++){
                if(Word[i] == tolower(Alph[j])){
                        CiWord[i] = tolower(InAlph[j]);
                }
            }
        }else{
            CiWord[i] = Word[i];
        }
        
    }

    printf("\ncyphertext: %s\n", CiWord);


}