#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int n = strlen(str);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent"
    
    sortString(str1);
    sortString(str2);
    
    if(strcpm(str1,str2)==0){
        printf("It is anagram");
    }
    else{
        printf("Not anagram");
    }

    return 0;
}
