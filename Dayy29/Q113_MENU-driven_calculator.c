#include <stdio.h>
int main (){

  
  int operator ;
  float num1 , num2 ;

  while(1){

     printf("\n<<<< CALCULATOR MENU >>>>\n");
     printf("Select an option given below\n");
     printf(" 1: Addition\n");
     printf(" 2: Subtraction\n");
     printf(" 3: Multiplication\n");
     printf(" 4: Division\n");
     printf(" 5: Leave\n");
 

     printf("Enter option no: ");
     scanf("%d",&operator);

     if (operator == 5){
        printf("thaNK U\n");   
         break;
     }


    switch (operator)
    {
    case 1 :
        printf("\nYour Choice: Addition\n");
        printf("Enter Two Numbers\n");
        printf("Number 1: ");
        scanf("%d",&num1);
        printf("Number 2: ");
        scanf("%d",&num2);
        printf("Result = %.2f\n", num1 + num2);
        break;
    
    case 2 :
        printf("\nYour Choice: Subtraction\n");
        printf("Enter Two Numbers\n");
        printf("Number 1: ");
        scanf("%d",&num1);
        printf("Number 2: ");
        scanf("%d",&num2);
        printf("Result = %.2f\n", num1 - num2);
        break;

    case 3 : 
        printf("\nYour Choice: Multiplication\n");
        printf("Enter Two Numbers\n");
        printf("Number 1: ");
        scanf("%d",&num1);
        printf("Number 2: ");
        scanf("%d",&num2);
        printf("Result = %.2f\n", num1*num2);
        break;

    case 4 :
        printf("\nYour Choice: Division\n");
        printf("Enter Two Numbers\n");
        printf("Number 1: ");
        scanf("%d",&num1);
        printf("Number 2: ");
        scanf("%d",&num2);
        if (num2 != 0){
        
        printf("Result = %.7f\n", num1 / num2);
        }
        else {
        printf("Division by zero is not possible.\n");
        }
        break;

    
    default: 
        printf("INVALID INPUT\n");
        break;
    }
  }
     
    return 0;
}