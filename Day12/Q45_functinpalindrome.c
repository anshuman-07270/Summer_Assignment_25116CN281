#include <stdio.h> 

int main()
{ 
 int num;
  printf("\nENTER A NUM YOU WANT TO CHECK WHETHER IT IS PALINDROME OR NOT:");
  scanf("%d",&num);
  if(palindrome(num))
  {
   printf("\nthe ENTERED NUMBER  %d IS A PALINDROME NUMBER " ,num);
 }else{
    printf("\nthe entered number %d is not a palindrome number",num);
 }
 return 0;
}

 int palindrome(int num)
 {
 int entered =num, rev=0, remd;
 // palindrome is said to be a palindrome number if the reverse of that number is equal to the original number;
 while(num>0)
 {
 remd=num%10;
 rev=rev *10 +remd;
 num=num/10;
 }
if(entered==rev){
    return 1;
}
else{
    return 0;
}
 }