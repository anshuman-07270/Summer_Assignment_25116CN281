#include <stdio.h> 
#include <math.h>
int main()
{ 
 int i ,n1,n2;
  printf("\nENTER A RANGE OF NUMBERS FOR ARMSTRONG:START-");
  scanf("%d",&n1); 
  printf("\n END- ");
  scanf("%d",&n2);
  printf("\n THE ARMSTRONG NUMBER BETWEEN %d AND %d IS/ARE :",n1,n2);
  
  for(i=n1;i<n2;i++){
  if(armstrong(i))
  {
  printf("  %d" ,i);
  }
 
  }
  return 0;
}

int armstrong(int num){   
 int count=0;
 int orignal= num;
    
     if(num>0)
    {
    while(num>0)
    { 
    num=num/10;
    count++;
    }
}else
 {
    count=1; 
 }
    int rem,sum=0;
     num=orignal;
     while(num>0){
     rem=num%10;
     sum=sum + round(pow(rem,count));
     num=num/10;
}
  return (orignal== sum);

} 
