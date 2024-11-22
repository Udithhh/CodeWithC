
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char num[100];
    printf("Enter a string with numbers and alphabets : ");
    fgets(num, sizeof(num), stdin);
    
    for(int i=0; i<strlen(num)-1; i++){
        if(isdigit(num[i])){
            printf("%c",num[i]);
        }
    }

    return 0;
}