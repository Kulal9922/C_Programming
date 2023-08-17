#include<stdio.h>

float pracentage(float M, float S,float Sci);

int main(){
    // float M=98;
    // float S = 85;
    // float Sci = 95;
    printf("the pracentage are :%f",pracentage(95.0,85.0,95.0));

}
float pracentage(float M, float S,float Sci){
    float pracentage1 = ((M + S + Sci)/300.0)*100.0;
    return pracentage1;
}
