#include <stdio.h>
 int main()
 {
  int num ;
  printf("\n ENTER A NUMBER ; ");
  scanf("%d",&num);
  
   prime(num);
 
    return 0;
 }


int prime(int num)
{
 int i ,prime=1;
 for(i=2;i*i<=num;i++)
 {
  if(num%i==0){
     prime =0; 
     break;
  }
}
   if (prime==1){
    printf("\n%d IS A PRIME NUMBER",num);
 }
   else
    {
      printf("\n%d IS NOT A PRIME NUMBER",num);
    }
    return 0;
}