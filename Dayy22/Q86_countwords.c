#include <stdio.h>
int main () {

 int i=0;
 int count= 0;
 char str[100];
 printf("\nENTER A STRING: ");
 fgets(str , sizeof(str), stdin);

  while (str[i] != '\0'){
   if(str[i] != ' ' && str[i] != '\n'){
    count++;
  }
   i++;
 }
   printf("\nTOTAL WORD COUNT (excluding spaces): %d",count);
   return 0;

}