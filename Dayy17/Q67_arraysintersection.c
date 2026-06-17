   #include <stdio.h>

    int main (){
    int n1,n2 ,i, j;

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
       
       printf("\nINTERSECTION OF THE GIVEN TWO ARRAYS: ");
      for ( i = 0; i < n1; i++) {
    
        for (j= 0; j < n2; j++){
            
            if (ar1[i]==ar2[j]){
            
                printf("%d ",ar2[j]);
            }
            
        }
        
      }
      

    return 0;

}