#include <stdio.h>
#include<math.h>

int main (){
int i,n;
int binary[12],  num =0;
  printf("\n ENTER total dgits of ur BINARY NUMBER : ");
  scanf("%d",&n);

  printf("ENTER A BINARY NUMBER : ");
 for (i=0;i<n;i++){ 

  scanf("%d",&binary[i]);

 }
 
  int r=0;
 for(i=n-1;i>=0;i--){
    if(binary[i]==1){
    
    num= num + pow(2,r);
    }
    r++;
}
   printf("\nTHE DECIMAL NUMBER IS :- %d",num);



    return 0;
}