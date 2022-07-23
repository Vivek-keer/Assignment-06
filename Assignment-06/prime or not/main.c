#include <stdio.h>
int main()
{
    int x,n,m;
   printf("Enter the number ");

   scanf("%d",&x);
   for(m=1,n=2;m<=4;m++)
   {
       if(x==1) {printf("Given number is not prime"); break;}
       if(x/n==1) {printf("Given number is prime"); break;}
       if(x%n) {n=2*m+1; }
       else {printf("Given number is not prime"); m=1; break;}
   }
    if(m==4) printf("Given number is prime");
   return 0;
}


