#include <stdio.h>

int main()
{
   int x,n,m,s,c;
   printf("Enter the number ");
   scanf("%d",&x);
   for(n=1,c=1;x/n>9;n=n*10)
   {c++;}
   for(c,m=1,s=0;c>0;c--)
   {
       s=s+x/n*m;
       x=x%n; n=n/10;
       m=m*10;
   } printf("\nReverse number: %d ",s);
   printf("\n");

   return 0;

}

