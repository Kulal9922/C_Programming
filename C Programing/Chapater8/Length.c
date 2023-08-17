#include<stdio.h>

int stringcount(char name[]);

int main(){
    char name[100];
    fgets(name,100,stdin);
    puts(name);
    printf("length is %d",stringcount(name));
    return 0;

}

int stringcount(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
    count++;
}
return count-1;
}