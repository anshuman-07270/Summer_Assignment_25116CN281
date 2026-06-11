#include <stdio.h>
int factorial(int num){ 
    
  int fact=1;
    for(int i=num;i>0;i--){
     fact=fact*i;
    }
     printf("\nThe Factorial of the given number is %d",fact);


}
int main(){
    int num,i,fact=1;
    printf("Enter a number");
    scanf("%d",&num);
    printf("the number is %d",num);

    factorial(num);
    return 0;
}