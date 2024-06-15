 #include <stdio.h>
 int main()
{
    int x,y, t=3,flag=0;
    scanf("%d",&x);\
    scanf("%d",&y);
    if(y==x)
    {
        printf("Right! Player 2 wins!\n");
        flag = 1;
    }
    else
    {
        printf("Wrong! %d Chance(s) Left!\n",t-1);
        t--;
    }
    if(!flag)
    {
        scanf("%d",&y);
        if(y==x)
        {
            printf("Right! Player 2 wins!\n");
            flag = 1;
        }
        else
        {
            printf("Wrong! %d Chance(s) Left!\n",t-1);
            t--;
        }


    }
    if(!flag)
    {
        scanf("%d",&y);
        if(y==x)
        {
            printf("Right! Player 2 wins!\n");
            flag = 1;
        }
        else
        {
            printf("Player 1 wins!\n");
        }
    }
    return 0;

}
