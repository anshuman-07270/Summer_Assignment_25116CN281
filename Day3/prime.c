#include <stdio.h>
 int main()
 {
  int num ;
  printf("\n ENTER A NUMBER ; ");
  scanf("%d",&num);
  
 if(prime(num)){
    printf("\n%d IS A PRIME NUMBER",num);
 }
 else
 {
    printf("\n%d IS NOT A PRIME NUMBER",num);
 }
 
    return 0;
 }


int prime(int num)
{
 int i;
 for(i=2;i<num;i++)
 {
  if(num%i!=0){
    return 1;
  }else 
   {
    return 0;
  }
 }
    
}