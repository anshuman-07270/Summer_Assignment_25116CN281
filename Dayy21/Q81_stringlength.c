#include <stdio.h>
int main () {

 int n= 0;
 char str[100];
 printf("\nENTER THE STRING: ");
 fgets(str , sizeof(str), stdin);
  
    while (str[n]!= '\0'){
    n++;

    }

    printf("\nTHE LENGTH OF THE GIVEN STRING IS: %d", n);
    return 0;

}
