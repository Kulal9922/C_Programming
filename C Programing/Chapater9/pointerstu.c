#include<stdio.h>

struct student{
    int roll;
    float marks;
    char Name[100];

}; //important

int main(){
    struct student s1 = {10,85.48,"Mangesh"};
    printf("student roll no: %d \n",s1.roll);

    struct student *ptr = &s1;
    printf("student roll no: %d \n",(*ptr).roll);

    printf("student roll no: %d \n",ptr->roll);

    return 0;
    
}