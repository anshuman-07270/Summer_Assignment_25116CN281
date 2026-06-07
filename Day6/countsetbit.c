#include <stdio.h>
#include<math.h>

int main (){
int i,n, count=0;
int binary[12],  num =0;
  printf("\n ENTER total dgits of ur BINARY NUMBER : ");
  scanf("%d",&n);

  printf("ENTER A BINARY NUMBER : ");
 for (i=0;i<n;i++){ 

  scanf("%d",&binary[i]);

 }
 for (i=0;i<n;i++){
    if(binary[i]==1)
    {
        count++;
    }
 }

    printf("\n THE TOTAL NUMBER OF SET BITS ARE %d" , count);

    return 0;
}