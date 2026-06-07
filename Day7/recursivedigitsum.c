#include<stdio.h>

int digits(int num){
 
 if (num==0){
    return 0;
 }
    else{
    return (num% 10) + digits(num /10);
 }
}

int main(){
int num ,result;
    printf("\n ENTER A NUMBER : ");
    scanf("%d",&num);
  

    result = digits(num);
    printf("The sum of digits is: %d\n", result);

    return 0;
}
    