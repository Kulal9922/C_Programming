#include<stdio.h>
//#include<math.h>

int main(){
    int n,temp,r,sum=0;
    printf("Enter The Number \n");
    scanf("%d",&n);
    temp=n;

    while(n>0){
       r= n%10; //first loop 153%10=3 , second loop 15%10=5 ,now in third loop 1%10=1
       sum=(r*r*r)+sum;  //x=(3*3*3)+0 == x=27 , x=5*5*5+27 == now x=
       n=n/10;  //153/10=15 ,15/10=1 ,

    }
    if(sum==temp){
        printf("The Number are armstrong");
    }
    else{
        printf("The Number are Not armstrong");
    }
    return 0;
}
