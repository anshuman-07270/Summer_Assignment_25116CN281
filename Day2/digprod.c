#include <stdio.h>
int main()
{
 int num, pr=1;
 printf("ENTER A NUMBER :");
 scanf("%d",&num);
 printf("\n THE ENTERED NUMBER IS %d",num);
 
 if(num!=0)
 {
  while(num>0)
  {
 int rem=num%10;
     pr=pr*rem;
     num=num/10;
  }
}
else{
    printf("\nINVALID INPUT , TRY AGAIN\n ");

}

 printf("\nTHE PRODUCT OF DIGITS OF THE ENTERED NUMBER IS %d",pr);


    return 0;
}