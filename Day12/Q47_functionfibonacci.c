#include <stdio.h>

int main(){
int num;

printf("\n ENTER THE RANGE FOR FIBONACCI SERIES: ");
scanf("%d",&num);

fibonacci(num);
    return 0;
}




int fibonacci(int num){

int a=0,b=1, temp;

printf("%d  ",a);

while(a<num){
temp = a;
a = a+b;
b = temp;

 printf("%d  ",a); 
}
    return 0;
}
 