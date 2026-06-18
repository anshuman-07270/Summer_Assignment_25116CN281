# include<stdio.h>
int main (){
int n, i;

 printf("\nENTER SIZE OF ARRAY: ");
 scanf("%d",&n);
 int arr[n];
 int num;

 printf("\nENTER ARRAY ELEMENTS: ");
 for( i =0; i<n; i++){
 scanf("%d",&arr[i]);
 }

 printf("\nENTER THE ELEMENT U WANT TO SEARCH IN ARRAY: ");
 scanf("%d",&num);

 int left = 0;
 int right = n-1;
 int mid ,flag =0;
 while(left <= right){

    mid = (left +right)/2;

   if (arr[mid]==num){

    flag=1;
    break;
   }
   else if (arr[mid] > num){

    right = mid-1;
   }
   else{

    left = mid +1;
   }
 }
   
  if (flag==1){

    printf("\nELEMENT FOUND AT INDEX %d",mid);
  }
 else{

    printf("\nELEMENT NOT FOUND \n TRY AGAIN");
 }
 
 
    return 0;
}