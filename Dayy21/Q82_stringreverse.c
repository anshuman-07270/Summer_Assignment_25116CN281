#include <stdio.h>
int main () {

 int n= 0;
 char str[100];
 printf("\nENTER THE STRING: ");
 fgets(str , sizeof(str), stdin);
  
    while (str[n]!= '\0'){
    n++;
    }

   for (int i= n-1  ; i >= 0 ; i--){
    printf("%c",str[i]); 
    }

   return 0;
}    