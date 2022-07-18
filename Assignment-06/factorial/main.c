#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,fac;
    printf("Enter number:  ");
    scanf("%d",&n);
    for(x=0,fac=1;x<n;x++)
    {
        fac=fac*(n-x);
    }
    printf("factorial is %d\n",fac);
    return 0;
}
