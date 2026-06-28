#include <stdio.h>
#include <string.h>

int main (){

 char name[30];
 int age ;
 
 printf("<<<<<VOTE ELIGIBLITITY SYSTEM>>>>>\n");
 printf("ENTER YOUR NAME: ");
 fgets(name , sizeof(name) , stdin);
 printf("\nENTER YOUR AGE: ");
 scanf("%d",&age);
 
 if (age >= 18){

    fputs(name , stdout);
    printf("YOU ARE ELIGIBLE TO VOTE\n");
 }
 else if (age < 18 && age > 0 ){

    printf("YOU ARE NOT ELIGIBLE TO VOTE\n");
 } 
 else{

    printf("\nINVALID AGE ENTERED\n");
 }
    return 0 ;
}


















