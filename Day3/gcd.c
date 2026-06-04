#include <stdio.h>
 int main()
 {
  int n1 ,n2 ,gcd ;

  printf("\n ENTER TWO NUMBERS :");
  scanf("%d %d",&n1,&n2);
   
   gcd= gcdof(n1 ,n2);
   printf("\nTHE GREATEST COMMON DIVIDER OF %d AND %d is %d",n1,n2,gcd);
   
   return 0;
 }
   
   int gcdof(int n1,int n2)
   {  
   while(n2!=0)
   {
    int temp=n2;
    n2=n1 % n2;
    n1=temp;
   }

    return n1;
   }