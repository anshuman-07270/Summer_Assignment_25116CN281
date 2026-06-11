int prime(int num)
{
    int prime =1;
    for(int j=2;j*j<=num;j++){

     if(num%j==0){
      prime =0;
     }
   }
   if(prime==1){
    printf("\n%d is a prime number ", num);
   }
   else{
    printf("\n%d is not a prime number ", num);
   }
}
int main (){

     int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("\nthe number is %d",num);


    return prime(num);
}