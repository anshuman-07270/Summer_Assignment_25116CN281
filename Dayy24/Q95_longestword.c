#include <stdio.h>
int main (){

 int i=0;
 char str[100];
 int length =0 ; 
 int start =0 ;
 int maxlen = 0 , maxstart = 0;

 printf("\nENTER A SENTENCE: ");
 fgets(str ,sizeof(str), stdin);

 while (str[i] != '\0'){

    if (str[i] != ' ' && str[i] != '\n') {
     length++;

     }else{ 
      if(length > maxlen){
        maxlen= length;
        maxstart= start;
      }

    length =0;
    start= i+1;

    }
    i++;
  }  
     // printing of longest woRd
      printf("\nLONGEST WORD IN THE SENTENCE: ");
      for( i = maxstart ; i < (maxlen + maxstart) ; i++){

       printf("%c",str[i]);
     }


  return 0;
}