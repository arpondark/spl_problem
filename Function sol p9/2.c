#include <stdio.h>
 void myfnc(char x){
     printf("Value received from main: %c\n",x);

 }
 int  main(){
    char c;
    scanf("%c",&c);
    myfnc(c);
    return 0;
 }