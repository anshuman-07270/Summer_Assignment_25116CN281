#include <stdio.h>
int main () {
    
 int i = 0;
 int n = 0;
 int found =0;
 char str[100]; 

 printf("\nENTER A STRING: ");
 fgets(str ,sizeof(str) ,stdin);

 while (str[n] != '\0' && str[n] != '\n'){
  n++;
 }
  
  for ( i = 0; i < n; i++){
  
     int freq = 0;
     for( int j =0 ; j < n ; j++){
 
        if (str[i]== str[j]){
         freq++ ;
        }  
      }
        if (freq ==1){

        printf("\nFIRST NON REPEATING CHARACTER IS: %c", str[i]);
        found=1;
        break;
        }
    
      }
      if(found == 0){

        printf("\nNO NON REPEATING CHARACTERS FOUND:\n"); 
      }
    return 0;

}