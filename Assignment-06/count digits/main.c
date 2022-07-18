#include <stdio.h>

int main()
{
   int x,n,count;
   printf("Enter the number: ");
   scanf("%d",&x);
   for(n=1,count=1;x/n>9;n=n*10)
   {
       count++;
   }
   printf("Number of digits: %d",count);
   return 0;
}
