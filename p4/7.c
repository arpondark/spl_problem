 #include <stdio.h>
 void main()
 {
    char c;
    int count = 1;
    while(1)
    {
        scanf(" %c",&c);
        if(c =='A')
        {
            break;
        }
        else{
             printf("Input %d: %c\n",count++, c);
        }
    }

 }