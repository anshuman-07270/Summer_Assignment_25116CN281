#include<stdio.h>
int main (){
     int i , num ;
   
        printf("\nENTER ANY NUMBER TO FIND ITS FACTORS ");
        scanf("%d",&num);
  
        printf("\n THE FACTORS OF %d ARE :-",num);
        factor(num);

      return 0;
    }
  int factor(int num){
  for(int i=1;i<num;i++)
 {
  if (num%i==0)
  {
    printf("  %d", i);
  }
 }
  }