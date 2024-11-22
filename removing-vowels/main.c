#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[100];
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);

	for(int i=0; i<strlen(str); i++) {
		if(
		    tolower(str[i]) != 'a' &&
		    tolower(str[i]) != 'e' &&
		    tolower(str[i]) != 'i' &&
		    tolower(str[i]) != 'o' &&
		    tolower(str[i]) != 'u'
		) {
			printf("%c",str[i]);
		}
	}

	return 0;
}
