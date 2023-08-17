#include<stdio.h>

struct address{   //structer data type
    int house_no;
    int block;
    char city[100];
    char state[100];
}; //imp

void printadd(struct address arr); //function

int main(){

    struct address arr[10];
    //input
    printf("Enter the information of person 1 \n");
    scanf("%d ",&arr[0].house_no);
    scanf("%d ",&arr[0].block);
    scanf("%s ",&arr[0].city);
    scanf("%s ",&arr[0].state);

    printf("Enter the information of person 2 \n");
    scanf("%d ",&arr[1].house_no);
    scanf("%d ",&arr[1].block);
    scanf("%s ",&arr[1].city);
    scanf("%s ",&arr[1].state);

     printf("Enter the information of person 3 \n");
    scanf("%d ",&arr[2].house_no);
    scanf("%d ",&arr[2].block);
    scanf("%s ",&arr[2].city);
    scanf("%s ",&arr[2].state);

     printf("Enter the information of person 4 \n");
    scanf("%d ",&arr[3].house_no);
    scanf("%d ",&arr[3].block);
    scanf("%s ",&arr[3].city);
    scanf("%s ",&arr[3].state);

    printadd(arr[0]);
    printadd(arr[1]);
    printadd(arr[2]);
    printadd(arr[3]);
}


    void printadd(struct address arr){
        printf("the Addres is %d, %d, %s, %s \n",arr.house_no,arr.block,arr.city,arr.state);
    }
