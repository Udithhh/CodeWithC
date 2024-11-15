/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateZeroSumArray(int n, int arr[]) {
    int sum = 0;

    
    for (int i = 0; i < n - 1; i++) {
        arr[i] = (rand() % 21) - 10; 
        sum += arr[i];
    }

   
    arr[n - 1] = -sum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements must be positive.\n");
        return 1;
    }

    int arr[n];
    srand(time(0)); 

    generateZeroSumArray(n, arr);

    
    printf("Generated array with sum zero: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

