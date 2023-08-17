#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float mark;
    char name[100];
};  //structer must be close by semicolon;

int main(){
   struct student s1;
   s1.roll = 10;
   s1.mark = 99.1;
   //s1.name[]= "kishor"   //it is not posible array does not reiniting string it do string pointer
   strcpy(s1.name, "Kishor");

   printf("student name = %s \n",s1.name);
   printf("student roll no:%d \n",s1.roll);
   printf("student mark %f \n", s1.mark);

   printf("-----------------------------------------------------------------------------------------------\n");

   struct student s2;
   s2.roll = 11;
   s2.mark = 100; 
   strcpy(s2.name,"Ganesh");

   printf("student name = %s \n",s2.name);
   printf("student roll no:%d \n",s2.roll);
   printf("student mark %f", s2.mark);

   printf("-----------------------------------------------------------------------------------------------\n");


   struct student s3 = {12,90.5,"omkar"};
   printf("student name = %s \n",s3.name);
   printf("student roll no:%d \n",s3.roll);
   printf("student mark %f", s3.mark);

   return 0;
    
    
}