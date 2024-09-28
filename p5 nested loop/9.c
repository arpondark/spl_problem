 #include <stdio.h>
 int main()
 {  
    system("color 00a4");
     int n;
     scanf("%d",&n);
     for(int row=0;row<n;row++)
     {
         for(int col=0;col<n;col++)
         {
            if ((row % 2 == 0 && col % 2 == 0) || (row % 2 == 1 && col % 2 == 1))
            {
                printf("1");
            }
            else{
                printf("0");
            }
         }
         printf("\n");
     }
 }
 

