#include<stdio.h>

int main(){
     int n;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++ ){
       
        if (i==6){
            continue;  //skipp
        }
         printf("%d \n",i);
    }
    return 0;

}