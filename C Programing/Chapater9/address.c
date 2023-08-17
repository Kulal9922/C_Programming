#include<stdio.h>

struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
}; //imp

int main(){
    struct address s1 = {1,01,"pune","maharashtra"};
    printf("the house no : %d \n",s1.house_no);
    printf("The block no : %d \n",s1.block);
    printf("The city is : %s \n",s1.city);
    printf("The state is : %s \n",s1.state);

    return 0;

}