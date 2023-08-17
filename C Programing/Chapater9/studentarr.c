#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float mark;
    char Name[];
};

int main(){
    struct student comp[100];
    comp[0].roll=10;
    comp[0].mark=95.5;
    strcpy(comp[0].Name,"kishor");

    printf("student name are : %s \n",comp[0].Name);
    printf("student roll no : %d \n",comp[0].roll);
    printf("student mark : %f \n",comp[0].mark);

    return 0;
    
}
