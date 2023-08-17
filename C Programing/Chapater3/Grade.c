#include<stdio.h>


int main(){
    int n;
    printf("Enter the Number: \n");
    scanf("%d", &n);

    if(n>80){
        printf("Grade are: A ");
    }
    else if(n>60 && n<80){
        printf("Grade are: B ");
    }
    else if(n>40 && n<60){
        printf("Grade are: c ");
    }
    else{
        printf("Grade are: D ");
    }
    return 0;

}