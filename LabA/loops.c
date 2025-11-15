#include <stdio.h>

int main(void) {

    // 3. Using Loops
    
    printf("=== While Loop (Even & Odd Numbers) ===\n");

    int i = 1;
    
    while (i <= 10) { //Numbers from 1 to 10 
    printf ("%d\n", i);
    i++;
    }
    
    printf("\n=== For Loop ===\n");
    
    for(i = 2; i <= 20; i = i + 2) { // Even number from 2 το 20
    printf("%d\n", i);
    }
    
    printf("\n== Do-While Loop ===\n");
    
    i = 1; 
    
    do {
    printf ("%d\n", i);
    i++; 
    }
    while (i <= 5); // Numbers from 1 to 5
    
    return 0;

}
