#include <stdio.h>

int main() {
    int n,minimum, maximum,minIndex, maxIndex;
    
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++) {
        
        scanf("%d", &array[i]);
    }
    minimum = array[0],maxIndex = 0;
    maximum = array[0],minIndex = 0;
    

    for(int i=1;i<n;i++){
        if(array[i] > maximum) {
            maximum = array[i];
            maxIndex = i;
        }
        else if (array[i] < minimum) {
            minimum = array[i];
            minIndex = i;
        }
    }

    printf("Max: %d,index: %d\n", maximum, maxIndex);
    printf("Min: %d,index: %d\n", minimum, minIndex);
   

    return 0;
}