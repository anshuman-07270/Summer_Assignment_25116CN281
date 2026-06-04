#include <stdio.h>
 int main()
 {
  int n1,n2;
  printf("\n ENTER TWO NUMBERS :");
  scanf("%d %d",&n1,&n2);
   
  int lcm =lcmof(n1,n2);

  printf("\nTHE LCM OF %d AND %d IS : %d",n1,n2,lcm);
  return 0;
 } 
  //  LCM stands for LEAST COMMON MULTIPLE
   int lcmof(int n1,int n2){

   int lcm= ((n1*n2)/gcdof(n1,n2)); 
    return lcm;
 }
 // To find the LCM of GIVEN numbers , it is required to find GCD first ;
   int gcdof(int n1,int n2){

   while(n2!=0)
   {
    int temp=n2;
    n2=n1 % n2;
    n1=temp;
   } 
   
    return n1;
 }
