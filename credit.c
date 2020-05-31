// Credit project for CS50

#include <stdio.h>

void CardChecker();
void CardSum();

int main(void){
    long CCNUM;
    do{
        printf("Enter a Credit Card Number\n");
        scanf("%ld" , &CCNUM);
    }while(CCNUM <0 || CCNUM > 9999999999999999);
   CardSum(CCNUM);
}

void CardSum(long CardNum){
    long n = CardNum;
    long m = CardNum;
    int DigSum = 0;
    int DigSum2 = 0;


    n = n /10;

    do{
        int Dig = n % 10;
        Dig = Dig*2;
        Dig = (Dig%10)+(Dig/10);
        DigSum = DigSum + Dig;
        n = n / 100;
    }while(n > 0);

    do{
        int Dig2 = m % 10;
        Dig2 = (Dig2%10)+(Dig2/10);
        DigSum2 = DigSum2 + Dig2;
        m = m / 100; 
    }while(m > 0);

    int CheckSum = DigSum2 + DigSum;
    if (CheckSum %10 == 0){
        CardChecker(CardNum);
    }else{
        printf("\nINVALID\n");
    }
}

void CardChecker(long cc){
    long Chk = cc;
    int numCount = 0;
    while(Chk >= 100){
        Chk /= 10;
        int FirstDigs = Chk;
        numCount++;
    }
    numCount = numCount + 2;

    if(numCount == 15){
        if(Chk == 34 || Chk == 37){
            printf("\nAMEX\n");
        }else{
            printf("\nINVALID\n");
        }
    }else if(numCount == 16){
            if(Chk/10 == 5){
                if(Chk % 10 <= 5 && Chk % 10 >= 1 ){
                    printf("\nMASTERCARD\n");
                }else{
                    printf("\nINVALID\n");
                }   
            }else if(Chk /10 == 4){
                printf("\nVISA\n");
            }else{
                    printf("\nINVALID\n");
            } 
    }else if(numCount == 13){
        if(Chk/10 == 4){
            if(Chk % 10 <= 5 && Chk % 10 >= 1 ){
                printf("\nVISA\n");
            }else{
                printf("\nINVALID\n");
            }
        }else{
            printf("\nINVALID\n");
        }
    }else{
        printf("\nINVALID\n");
    }
}