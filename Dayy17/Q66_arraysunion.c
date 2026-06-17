#include <stdio.h>

int main (){
    int n1,n2 ,i ,j,k;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    int ar1[n1];
    int ar2[n2];
    printf("Enter elements of array 1: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &ar1[i]);
     }

    printf("Enter elements of array 2: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &ar2[i]);
     }
     
        printf("UNION OF ARRAYS: ");
      for(i = 0; i < n1; i++) {
        printf("%d ", ar1[i]);
      }
     for ( i = 0; i < n2; i++) {
      int found =0;

        for ( j= 0; j < n1; j++){
            
            if (ar2[i]==ar1[j]){
             found= 1;
              break;
            }

          }
          if (found ==0){
          
            printf("%d ",ar2[i]);
           }
           
         }
       
      

      
      return 0;
    
    }