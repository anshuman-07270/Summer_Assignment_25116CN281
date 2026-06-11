#include<stdio.h>
int main (){
 int a, b;
    printf("Enter first number; ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    maximum(a,b);
    return 0;
}

int maximum(int ,int);


int maximum(int a ,int b ){

    if (a>b){
        printf("%d is MAXIMUM NUMBER ",a);
    }else{
        printf("%d is MAXIMUM NUMBER ",b);
    }
}