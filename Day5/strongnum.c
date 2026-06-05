#include <stdio.h>
  int main(){

     int num;  
     printf("\n ENTER ANY NUMBER TO CHECK :");
     scanf("%d",&num);
  
 
 if(digits(num))
  {

     printf("\n THE ENTERED NUMBER %d IS A STRONG NUMBER ",num);
  }
 else{
      printf("\n THE ENTERED NUMBER %d IS NOT A STRONG NUMBER ",num);
  }
     return 0;
}
int digits(int num){
    int orignal =num;
    int sum=0;
    while(num>0){
    
    int digit= num%10;      // 145 % 10 = 5 ; 14 %10 = 4
    int fact=1;

      for(int i=digit;i>0;i--){
                            // 5>0   ; 4>0
        fact= fact*i;    //fact = 1*5=> fact =5*4*3*2*1 =120   ; fact =4
      }
        num=num/10;  //145 /10 = 14
        sum= sum+fact;   // sum= 0+120 =120
    }

    return (orignal==sum);
}


