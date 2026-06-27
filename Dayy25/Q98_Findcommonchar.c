#include <stdio.h>
#include <string.h>
int main (){

 int i = 0; 
 char str1[100];
 char str2[100];

 printf("Enter a string: ");
 fgets(str1 , sizeof(str1) , stdin);

 printf("Enter a string: ");
 fgets(str2 , sizeof(str2) , stdin);

  int len1 = strlen(str1) ;
  int len2 = strlen(str2) ;

  printf("\nCommon Terms:\n");

  for ( i = 0 ; i < len1 ; i++){

    for ( int j = 0 ; j < len2 ; j++){

      if (str1[i] == str2[j]){

       printf("%c ",str1[i]);
      }
   }
  }

   return 0;
}