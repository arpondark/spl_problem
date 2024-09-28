#include <stdio.h>

int globalVar = 10; 
int main() {
    int localVar = 20; 

    
    printf("A. Global : %d\n", globalVar);

   
    printf("B. Local: %d\n", localVar);


    printf("C. Global: %d\n", globalVar);

    return 0;
}
