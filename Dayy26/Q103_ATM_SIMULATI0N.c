#include <stdio.h>

int main (){

 int option;
 int balance = 100000;
 int amount;
 int yes;

 printf("<<<<<WELCOME TO CHILDREN'S BANK ATM>>>>>\n");
 printf("PLEASE INSERT YOUR CARD\n");
 printf(" 1: WITHDRAWL\n");
 printf(" 2: DEPOIST MONEY\n");
 printf(" 3: CHECK BALANCE\n");
 printf(" 4: EXIT\n");

 printf("SELECT AN OPTION TO PROCEED: ");
 scanf("%d",&option);
 
 switch (option){

    case 1 : printf("\nAMOUNT TO BE WITHDRAW: ");
             scanf("%d",&amount);
             if(amount <= balance){
             balance= balance-amount;
             printf("\nCOLLECT THE CASH\n");
             }
             else{
                printf("INSUFFICIANT BALANCE\n");
             }
             printf("you want to check balance\n 1. YES \n 2. NO ");
             scanf("%d",&yes);
            
             if (yes == 1){
             printf("YOUR ACCOUNT BALANCE: %d\n",balance);
             
             }else if (yes ==2){
             printf("OKAY\n");
             }
             break;

    case 2 : printf("AMOUNT TO BE DEPOISTED\n");
             scanf("%d",&amount);
             balance= balance+amount;
             printf("you want to check balance\n 1. YES \n 2. NO");
             scanf("%d",&yes);
            
             if (yes == 1){
             printf("YOUR ACCOUNT BALANCE: %d\n",balance);
             
             }else if (yes ==2){
             printf("OKAY\n");
             }
             break;

    case 3 :  printf("YOUR ACCOUNT BALANCE: %d\n",balance);
              break;

    case 4 :
             break;
             return 0;

    default: printf("INVALID INPUT\n");
             break;
             
 }
    printf("PLEASE TAKE YOUR CARD\n");
    printf("THANK YOU FOR VISITING\n");

    return 0;
}