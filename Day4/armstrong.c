#include <stdio.h> 
#include <math.h>
int main()
{ 
 int num;
  printf("\nENTER A NUMBER YOU WANT TO CHECK WHETHER IT IS ARMSTRONG OR NOT:");
  scanf("%d",&num);
  if(armstrong(num))
  {
   printf("\nthe ENTERED NUMBER  %d IS A ARMSTRONG NUMBER " ,num);
 }else{
    printf("\nthe entered number %d is not an ARMSTRONG NUMBER ",num);
 }
 return 0;
}

int armstrong(int num){   

 int count=0;
 int original=num;

     if(num!=0)
    {
    while(num>0){ 
    num=num/10;
    count++;
    }
}else{   
     count=1; 
}
 num=original;
 int rem,sum=0;
     while(num>0){
     rem=num%10;
     sum=sum + round(pow(rem,count));
     num=num/10;
}
 if(original== sum){
   return 1;
 } else{
   return 0;
 }
}