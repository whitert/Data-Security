#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "caesarinfo.h"
#include "caesarcode.c"

int main()

{
    int choice;
    int shift;
    char cipher[50];

    printf("Enter the text -> ");
    gets(cipher);

    printf("Enter the shifts -> ");
    scanf("%d", &shift);
    shift = abs(shift);

    printf(" Type 0 to encrypt or 1 to decrypt -> ");
    scanf("%d", &choice);


    if(choice == 0){

        encrypt(cipher, shift);

    }

    if(choice == 1){

        decrypt(cipher, shift);

    }


    return 0;
}