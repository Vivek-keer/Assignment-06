#include <stdio.h>
int main()
{
    int x,n;
   printf("Enter the number ");

   scanf("%d",&x);
   printf("%d number is ",x);


   for(n=x/2;n>1;n--)
   {

       if(x%n==0)  break;

   }

    if(n==1) printf("Prime number");
    else     printf("Not Prime number");

}



