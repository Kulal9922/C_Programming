#include<stdio.h>


int main(){
    int n;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    // if(n>30){
    //     printf("The student are pass");

    // }
    // else{
    //     printf("The student are failed");
    // }
    (n>30) ? printf("The student are pass") : printf("The student are failed");
    return 0;
}