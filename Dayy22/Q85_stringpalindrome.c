#include <stdio.h>
int main () {

 int n= 0;
 int flag =0;
 char str[100];
 printf("\nENTER THE STRING: ");
 fgets(str , sizeof(str), stdin);
  
    while (str[n]!= '\0'){
    n++;
    }
     if (str[n-1] == '\n'){
        str[n-1] = '\0';
        n--;
     }

    for (int i = 0; i < n/2 ;i++){
     if(str[i] != str[n-1-i]){
     flag =1;
     break;
     }
    }
     if (flag ==0){
        printf("\nPALINDROME STRING\n");
     }
     else{
        printf("\nNOT A PALINDROME STRING\n");
     }
     
    return 0;

}