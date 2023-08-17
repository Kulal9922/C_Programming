#include<stdio.h>

float circle(float r);
int reactangle(int a,int b);
int Square(int a);

int main(){
    float r;
    printf("Enter the Redius: \n");
    scanf("%f",&r);
    printf("Area of Circle are %f \n",circle(r));
    int a,b;
    printf("Enter the length:");
    scanf("%d",&a);
    printf("Enter the breath:");
    scanf("%d",&b);
    printf("Area of reactangle are %d \n",reactangle(a,b));
    printf("Area of Square are %d",Square(a));

    return 0;
}
float circle(float r){
   
    return 3.14*r*r;
}
int reactangle(int a,int b){
    return a*b;
}
int Square(int a){
    return a*a;
}