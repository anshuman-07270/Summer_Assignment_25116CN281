#include <stdio.h>
int main()
{
    int num,rem ,rev=0;
 printf("ENTER A NUMBER: ");
 scanf("%d",&num);
 printf("\n THE ENTERED NUMBER IS %d",num);
 if(num!=0)
 {
    while(num>0)
    { 
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
    }
 }else{
    printf("\nsorrrrryyyyy ,TRY AGAIN");
 }
  printf("\nthe reversed of the number entered is %d",rev);

    return 0;
}