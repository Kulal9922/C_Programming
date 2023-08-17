#include <stdio.h>

int main (){
    int redius;
    float pi = 3.14;

    printf("Enter the Redius \n");
    scanf("%d",&redius);

    float Area = pi * redius * redius;

    printf("Area of Circle is %f \n", Area);
    return 0;

    
}