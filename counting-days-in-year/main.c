/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char date[] = "2024-03-01";
    int numOfDate[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
    int month = (date[5] - '0') * 10 + (date[6] - '0');
    int day = (date[8] - '0') * 10 + (date[9] - '0');
    
    if(year%400==0 || (year % 100 != 0 && year % 4 == 0)){
        numOfDate[1] = 29;
    }
    
    int dayOfYear = 0;
    for (int i = 0; i < month - 1; i++) {
        dayOfYear += numOfDate[i];
    }
    dayOfYear += day;
    
    printf("Number of days : %d",dayOfYear);
    
    return 0;
}
