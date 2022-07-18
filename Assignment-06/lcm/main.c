#include <stdio.h>


int main()
{
    int m=1,n=2,LCM=1; int x,y;
    printf("Enter the two numbers as x,y: ");
    scanf("%d,%d",&x,&y);
    while(y>1||x>1)
    {
        if(x%n==0||y%n==0)
        {
            LCM=LCM*n;
            if(y%n==0) y=y/n;
            if(x%n==0) x=x/n;

        }
        else {
               n=2*m+1;
               m++;
             }
    }
     printf("LCM is %d",LCM);

    return 0;
}
