#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  
  int num , guess;
   
  srand(time(0));
  num = rand() % 100 +1;

   printf("\n<<<<<NUMBER GUESSING GAME>>>>>\n");
   printf("Guess a number betweeen 1 to 100\n");

   do{
    
    printf("ENTER YOUR GUESS: ");
    scanf("%d",&guess);
    
     if (guess > num){
     printf("This is High\n");

     }else if(guess < num){
      printf("This is Low\n");
     
     }else{
      printf("\nYOU GUESSED IT CORRECT : %d is Right Answer", guess);

    }
   }
    while (guess != num);

    return 0 ;
}