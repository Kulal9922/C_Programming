#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the Number \n");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        sum=sum+i;
    }
    printf("the sum of number is %d \n",sum);

    for(int i=n; i>=1; i--){
        printf("%d \n",i);
    }
    return 0;
}