#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "playfairsource.c"
#include "playfairheader.h"

int main(){

    int answer;

    char str[100], key[100];

    printf("Enter a string\n");
    gets(str);

    printf("Enter the key (if it is possible do not repet the elements)\n");
    gets(key);

    printf("\n");
    printf("Encrypt or Decrypt the text? Type 0 to encrypt or 1 to decrypt. ");
    scanf("%d", &answer);

    if(answer == 0){

        encrypt(str, key);

    }

    if(answer == 1){

        decrypt(str, key);

    }

return 0;

}
