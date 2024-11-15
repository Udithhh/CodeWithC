
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[20],str2[20];
    int count = 0;
    printf("Enter a string : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter another string : ");
    fgets(str2, sizeof(str1), stdin);
    
    for(int i=0; i<strlen(str1)-1; i++){
        for(int j=0; j<strlen(str2)-1; j++){
            if(tolower(str1[i]==tolower(str2[j]))){
                count = 1;
                break;
            }
        }
    }
    
    if(count == 1){
        printf("Common character found");
    }
    else{
        printf("No common character");
    }

    return 0;
}