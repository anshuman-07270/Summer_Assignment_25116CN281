#include <stdio.h>

int main(){
    int num1,count=0;
    printf("Enter a number");
    scanf("%d",&num1);
    if(num1!=0)
    {
    while(num1!=0){ 
    num1=num1/10;
    count++;
    }
}else{
    count=1;
}
   printf("The total number of digits are/is %d",count);
    return 0;
}