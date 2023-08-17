#include<stdio.h>

int main(){
    int a=10;
    printf("The address of a is:%d \n",&a);// 
    int ptr = &a;
    printf("%d \n",ptr); //address of a
    printf("The address of ptr is:%d \n",&ptr); 
    int *ptr1=&a; //pointer to the variable a
    printf("%d \n",*ptr1);
    printf("%d", *(&a));
}