#include<stdio.h>
int main(){
    int num;
     printf("\n ENTER ANY NUMBER : ");
     scanf("%d",&num);
     
     printf("\n THE LARGEST PRIME FACTOR OF %d IS :- ",num);
     lprime(num);
     return 0;
}

void lprime(int num){

for(int i=num-1;i>0;i--)
 {
  if (num%i==0)
  { 
    int prime =1;
    for(int j=2;j*j<=i;j++){

     if(i%j==0){
      prime =0;
     }
   }
   if(prime==1){
    printf("%d", i);
   return;
   }
  }
 }    
}