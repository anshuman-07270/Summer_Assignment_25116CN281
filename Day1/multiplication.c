#include <stdio.h>

int main(){
 
    int num , i ,ans;
    printf("Enter a number");
    scanf("%d", &num);
    printf("%d",num);
     for(i=1;i<=10;i++){
     ans=num*i; 
      printf("\n%d*%d=%d",num,i,ans);
     }
    
    return 0;
}