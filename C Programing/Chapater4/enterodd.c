#include<stdio.h>

int main(){
    
   // for(int i=1; i<=1; i++) //For Loop condition give finite number of input that way you use the do while loop
   
   int n;
   do{
   printf("Enter the number:");
   scanf("%d",&n);
   printf("%d \n",n);

   if(n%2 == 1){
    break;
   }
   }
   while(1);
   printf("Thank you");

}