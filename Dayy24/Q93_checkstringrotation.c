#include <stdio.h>
#include <string.h>
int main (){

    int posi;
    char str[100];
    
    printf("ENTER A STRING: ");
    scanf("%s",&str);

    int n = strlen(str);
    char strr[100];

    strcpy(strr , str);

    printf("ENTER A POSITION: ");
    scanf("%d",&posi);

    posi = posi%n;
   for( int i = 0 ; i < posi ; i++ ){

    char temp = str[0];
    for (int j = 0 ; j < n-1; j++){

     str[j] = str[j+1];
     }
     str[n-1]= temp;
   }
     
   printf("\nROTATED ARRAY (LEFT):\n");
   printf("%s",str);

   for(int i = 0; i < posi ; i++){

     char temp2 =strr[n-1];
      for(int j = n-1; j >0 ; j--){

      strr[j] = strr[j-1];

     }
     strr[0] = temp2;
    }

   printf("\nROTATED ARRAY (RIGHT):\n");
   printf("%s",strr);
   return 0;

}