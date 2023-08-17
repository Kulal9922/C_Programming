#include<stdio.h>

int sum(int a, int b);
int avarge(int a, int b);
int product(int a, int b);

int main(){
    int a=10;
    int b=5;
    sum(a,b);
    avarge(a,b);
    product(a,b);

}

int sum(int a, int b){
    printf("sum of the number are:%d \n",a+b);

}

int avarge(int a, int b){
    int avg=(a+b)/2;
    printf("Avarge of the number are:%d \n",avg);
}

int product(int a, int b){
    printf("Product of the number are:%d",a*b);
}