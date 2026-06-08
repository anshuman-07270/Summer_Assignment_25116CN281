// HALF PYRAMID PATTERN


#include <stdio.h>

int main (){  
    char p;
    int i ,j;

      printf("\n ENTER A CHARACTER : ");
      scanf("%c",&p);


    for (i=1; i<=5; i++)
    {
        for (j=1; j<=i; j++)
       {
        printf("%c",p);
       }
        printf("\n");
     } 

    return 0;



}