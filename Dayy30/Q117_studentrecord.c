#include <stdio.h>
int main () {

   char name[50][30];
   int roll_no[50];
   float marks[50];
   int n =0;
   int option , rollcall ,found ;

   while(1) {

    printf("<<<< STUDENT RECORD >>>>\n");
    printf("SELECT AN OPTION BELOW\n");
    printf(" 1: Add Student\n");
    printf(" 2: Display Students\n");
    printf(" 3: Search Student\n");
    printf(" 4: Exit\n"); 
    printf("Enter your choice: ");
    scanf("%d", &option);

     if (option== 4){
        printf("THANK YOU\n");   
        break;
     }

   switch (option){
    
 case 1: printf("Enter Roll Number: ");
         scanf("%d",&roll_no[n]);
         printf("Enter Student Name: ");
         scanf(" %[^\n]", name[n]); // skips whitespaces beforewards 
         printf("Enter Marks: ");
         scanf("%f",&marks[n]);
         n++;
         printf("Student added Successfully\n");
         break;

 case 2: if(n == 0 ){
 
        printf("No Student Record Found\n");
        } 
        else {

        printf("Students Record\n");
        printf("-----------------------------------\n");
        for (int i = 0; i < n; i++) {

         printf("Roll No : %d\n",roll_no[i]);
         printf("Name    : %s\n",name[i]);
         printf("Marks   : %.2f\n",marks[i]);
         printf("-----------------------------------\n");
        }
       }
       break;

 case 3:  printf("\nEnter Roll Number to Search: ");
          scanf("%d", &rollcall);

         found = 0;

         for (int i = 0; i < n; i++) {

          if (roll_no[i] == rollcall) {

            printf("\nStudent Found:\n");
            printf("Roll No : %d\n",roll_no[i]);
            printf("Name    : %s\n",name[i]);
            printf("Marks   : %.2f\n",marks[i]);

         found = 1;
            break;
            }
         }
         if(found ==0){

            printf("No Student Found\n");
         }
       break; 

 default:
       printf("Invalid Input\n");
       break;
    }

  }
    return 0;

}