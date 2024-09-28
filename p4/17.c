#include <stdio.h>

void main() 
{
    int number;
    while(1)
    {
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(number <= 1) {
        printf("Not  prime .\n");
    } else {
        int isPrime = 1;
        for(int i = 2; i <= number/2; i++) {
            if(number % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
   
 }
    
    
}