#include <stdio.h>
int main (){

    int n;
    int i,num;
   printf("\nENTER ARRAY SIZE :");
   scanf("%d",&n);
   int arr[n];
   printf("\nENTER AN ARRAY: ");
   for ( i = 0; i <n;i++){ 

    scanf("%d",&arr[i]);
   }
    printf("\nDUPLICATE NUMBERS are: ");
   
   for(int i=0; i<n; i++){
    int dupl=0;


     for(int k=0;k<i;k++){
      
        if(arr[i]==arr[k]){
        dupl=1;
        break;
      }

     }

     if(dupl)
     continue;
    for (int j=i+1; j<n;j++){

        if (arr[i]==arr[j]){
            printf("%d ",arr[i]);
            break;
        }
      }
       
    }  

    return 0 ;
}