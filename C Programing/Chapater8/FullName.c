#include<stdio.h>

int main(){
    char Name[100];
    printf("Enter the Name :");
    //gets(Name);
    fgets(Name,100,stdin);
    puts(Name);

    return 0;
}