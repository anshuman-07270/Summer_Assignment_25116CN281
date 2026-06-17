#include <stdio.h>

int main() {
    int n ,i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int sum ;
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }  
    printf("\nENTER THE TARGET SUM: ");
    scanf("%d",&sum);
    int nope=0;
     for(i =0;i <n;i++){

        for ( j = i+1; j < n; j++){

            if(arr[i] + arr[j] ==sum){
                printf("\nTHE PAIR OF ELEMENTS FOR TARGET SUM ARE: %d & %d",arr[i],arr[j]);
            }else{
               nope=1;
            }
        }
        
     }
       if (nope==1)
       {
          printf("\nNO SUCH PAIR EXISTS\n");
       }
       
    return 0; 
    }