#include <stdio.h>

int main(){
    int length,breadth;

    printf("Enter the Length \n");
    scanf("%d",&length);

    printf("Enter the breadth \n");
    scanf("%d",&breadth);

    int area = length * breadth;
    printf("Area of Rectangle is %d \n", area);

    return 0;
}