#include<stdio.h>

int main(){
    char *Name = "Kishor"; //String Pointer can change the strings
    puts(Name);  // can be reinitialized
    Name = "Ganesh";
    puts(Name);
    
    printf("\n");

    char Name1[] = "Kishor";  // can not be reinitialized
    puts(Name1);  
    //Name1 = "Ganesh";  it give the comiler error
    puts(Name1);

    return 0;
}