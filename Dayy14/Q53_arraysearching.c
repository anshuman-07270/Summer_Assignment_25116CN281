#include<stdio.h>       
int main (){
    
   int n;
   int i,num;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){ 

    scanf("%d",&arr[i]);
   }
  
  
  printf("\nENTER A NUMBER U WANT TO SEARCH; ");
    scanf("%d",&num);
   int place;
   for ( i = 0; i <n; i++){    
    
    if (arr[i]==num){
      
     place= i;
      break;
    }else{

        place = -1;
    }
     }if(place!=-1){
          printf("\nTHE ELEMENT %d IS FOUND AT %d",num,i);
     }else{
          printf("\nTHE ELEMENT IS NOT FOUND ");
     }

    return 0;
}