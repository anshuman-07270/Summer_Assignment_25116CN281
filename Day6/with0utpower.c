#include <stdio.h>
int main (){

  int num;
  int power;
  int ans=1;

   printf("\n ENTER THE NUMBER (the value of x ) :");
   scanf("%d",&num);

   printf("\n ENTER THE POWER (the value of n) : ");
   scanf("%d",&power);
    
  
 
 
   for(int i=1;i<=power;i++){

    ans= ans* num ;
   } 
   printf("\n TNE ANSWER WILL BE : %d ",ans);
    return 0;
}