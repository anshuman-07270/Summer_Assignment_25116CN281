#include <stdio.h> 
int main(){
 int num,rem ,sum=0;
 printf(" enter a number __");
 scanf("%d",&num);
 printf("\nthe number is: %d",num);

 if(num!=0)
{
while(num>0){
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}
}
else{
    printf("\nthe value must be greater than zero, TRY AGAIN");
}
  printf("\nTHE SUM OF DIGITS OF GIVEN NUMBER IS %d",sum); 


    return 0;
}