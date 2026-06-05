 #include <stdio.h>
  int main(){

     int num;  
     printf("\n ENTER ANY NUMBER TO CHECK :");
     scanf("%d",&num);
  
 
 if(perfect(num))
  {

     printf("\n THE ENTERED NUMBER %d IS A PERFECT NUMBER ",num);
  }
 else{
      printf("\n THE ENTERED NUMBER %d IS NOT A PERFECT NUMBER ",num);
  }
     return 0;
}

int perfect(int num){

 int i ,pr=1;

 for(i=2;i<num;i++){
 if(num%i==0){
  pr=pr+i;
 }
}

    return (num==pr);
}


