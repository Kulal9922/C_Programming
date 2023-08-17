#include<stdio.h>

void Nameprint(char arr[]);

int main(){
    char arr[]= "Kishor";
    char arr1[]="Ganesh";

    Nameprint(arr);
    Nameprint(arr1);
    return 0;
}

void Nameprint(char arr[]){
    for(int i= 0; arr[i] !='\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
