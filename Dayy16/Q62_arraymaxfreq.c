#include <stdio.h>

int main() {
    int n ,i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    
   int num ,maxfreq =0;
    int cunt =0;
    
   for ( i = 0; i <n; i++){
      cunt=1;

    for(int j = i+1 ;j <n ;j++){
 
        if (arr[i]==arr[j]){
             
         cunt++;

        }
        if (cunt >maxfreq){        

          maxfreq =cunt;
          num =arr[i];
         }
       }

     }
       printf("Element with maximum frequency = %d\n",num);
       printf("Frequency = %d\n",maxfreq);
     

  return 0;

}