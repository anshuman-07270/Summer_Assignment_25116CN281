#include <stdio.h>

int main(){
    int num,i,fact=1;
    printf("Enter a number");
    scanf("%d",&num);
    printf("the number is %d",num);
    for(i=num;i>0;i--){
     fact=fact*i;
    }
     printf("\nThe Factorial of the given number is %d",fact);
    return 0;
}