#include <stdio.h>

int main(){ 
int a=0,b=1, temp;
int n;

printf("\n ENTER THE term FOR FIBONACCI SERIES: ");
scanf("%d",&n);

 if(n==0)
 {
 printf("  %d",a);
 }

for(int i=1;i<n;i++){

temp = a+b;
a=b;
b = temp;

}
    printf("\nNth FIBONACCI TERM : %d",b);
    return 0;
}
 