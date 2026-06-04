#include <stdio.h>
 int main()
 {
     int i,num1,num2,pr;
  printf("\n ENTER A  range of NUMBERs ; ");
  scanf("%d %d",&num1,&num2);
 printf("\n prme numbers btw %d and %d are", num1,num2);

  int num;
 for(num=num1;num<=num2;num++)
 { 
if(num>2)
 pr=1;
 for(i=2;i<num;i++)
 {
  if(num%i==0)
  {
    pr=0;  
   break;
  }
 } if(pr==1)
    printf(" %d",num);
}
   return 0;
 }