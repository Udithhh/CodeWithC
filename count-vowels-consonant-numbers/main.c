
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int cCount = 0;
    int nCount = 0;
    int vCount = 0;
    printf("Enter a string with characters and numbers : ");
    fgets(str, sizeof(str), stdin);
    
    
    for(int i=0; i<strlen(str)-1; i++){
        char ch = tolower(str[i]);
        
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vCount++;
        }
        else if(isdigit(str[i])){
            nCount ++;
        }
        else if(isalpha(str[i])){
            cCount ++;
        }
    }
    
    printf("\nVowels : %d\nConsonents : %d\nNumbers : %d",vCount,cCount,nCount);

    return 0;
}
