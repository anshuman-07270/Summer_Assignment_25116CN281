#include <stdio.h>

int main(){ 
int a=0,b=1, temp;
int num;

printf("\n ENTER THE RANGE FOR FIBONACCI SERIES: ");
scanf("%d",&num);

printf("%d  ",a);

while(a<num){
temp = a;
a = a+b;
b = temp;

 printf("%d  ",a); 
}
    return 0;
}
 