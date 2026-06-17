#include<stdio.h>       
int main (){
    
   int n;
   int i,num;
   printf("\nENTER SIZE OF ARRAY :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){ 

    scanf("%d",&arr[i]);
   
  }
 for (i = 0; i < n; i++){

      for ( int j = i+1; j < n; j++)
      {
        if (arr[i]==arr[j])    // checking for duplicates
        {
           for (int s = j; s < n-1; s++){     // to shift elments to left side
           
            arr[s]= arr[s+1];
           }
           n--;      // reset array size
           j--;
        }
        
       }
      
     }
   printf("\nARRAY AFTER REMOVING DUPLICATE ELEMENTS: ");
    for ( i = 0; i < n; i++){
     
        printf("%d ",arr[i]);
    }
    

  return 0;
}

