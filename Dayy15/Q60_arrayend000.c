#include<stdio.h>
int main (){
   int n;
   int i;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   int zerocount=0;
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n; i++){       // input an array
    
    scanf("%d",&arr[i]);
   }
   for ( i = 0; i <n; i++){    // printing the array elements
    if (arr[i]!=0){             // checking for zer0

    printf("%d ",arr[i]);   
   }
 else {
    zerocount++;
  }
 } if(zerocount !=0){
 for (int p = 0; p < zerocount; p++){   // printing zeroes at the end
 
    printf("0 "); 
  }
 }
    return 0;
}