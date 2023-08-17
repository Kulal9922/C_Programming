#include<stdio.h>

int sum(int n);
    //recurgen
int main(){
    printf("the sum of N number is %d:",sum(5));
}
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1 = sum(n-1); //the sum of 1 to n-1;
    int sumN = sumNm1 +n;
    return sumN;
}