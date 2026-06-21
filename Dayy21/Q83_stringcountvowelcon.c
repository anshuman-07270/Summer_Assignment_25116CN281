#include <stdio.h>
int main (){

char str[100] ;
int n = 0;
  printf("\nENTER THE STRING: ");
  fgets(str , sizeof(str), stdin);
  
  int vowel =0;
  int cons =0 ;
  int spaces =0;
    while (str[n]!= '\n'){
      
         if (str[n] == 'a'|| str[n] == 'e' || str[n] == 'i' ||str[n] == 'o'|| str[n] == 'u'  || str[n] == 'A' || str[n] == 'E' || str[n] == 'I' ||
            str[n] == 'O' || str[n] == 'U'){
            vowel++ ;
         }
         else if(str[n] == ' '){
              
         spaces++ ;
         }else{

            cons++ ;
         }
         n++;
    }  
     
    printf("\nTOTAL VOWELS IN THE STRING: %d",vowel);
    printf("\nTOTAL CONSONANTS IN THE STRING: %d",cons);
    printf("\nTOTAL SPACES IN THE STRING: %d",spaces);

   return 0; 
}