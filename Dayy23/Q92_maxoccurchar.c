#include <stdio.h>
int main () {
    
 int i = 0;
 int n = 0;
 char str[100]; 

 printf("\nENTER A STRING: ");
 fgets(str ,sizeof(str) ,stdin);

 while (str[n] != '\0'){
  n++;
 }
  char alpha;
  int maxfreq =0;
  for ( i = 0; i < n; i++){
  
      int freq = 1;
    for( int j =i+1 ; j <n ; j++){
 
        if (str[i]== str[j]){
         freq++ ;
        }
        if(freq > maxfreq){
         maxfreq = freq;
          alpha = str[i];
        }
    }      
  }
    
    printf("Most occuring character is: %c\n",alpha);
    printf("Frequency = %d\n",maxfreq);
    
    return 0;

}