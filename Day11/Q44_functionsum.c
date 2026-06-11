#include<stdio.h>
int main (){
  int a ,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}



int sum(int a ,int b){
    int sum= a+ b;
     printf("\nTHE SUM OF THE ENTERED NUMBERS IS %d ", sum);
}