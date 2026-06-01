#include <stdio.h>
int main(){
 int num , i ,sum=0;
    printf("Enter a Natural number");
    scanf("%d", &num);
    printf("%d",num);
     for(i=1;i<=num;i++){
  sum=sum+i; 
}
   printf("The sum of N natural numbers is %d",sum);

    return 0;
}