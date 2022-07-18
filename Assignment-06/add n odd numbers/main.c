#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,s,y;
    printf("Enter number n to add:  ");
    scanf("%d",&n);
    for(x=1,s=0;x<=n;x++)
    {
        y=2*x-1;
        s+=y;
    }
    printf("%d\n",s);
    return 0;
}
