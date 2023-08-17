#include<stdio.h>

//int revers(int arr[], int n);

int main(){
     int arr[] = {1,2,3,4,5,6};
     revers(arr,6);
      for(int i=0; i<6; i++){
     printf("%d \n",arr[i]);
}
    
    }


int revers(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[(n-i-1)];
        arr[(n-i-1)]=temp;
    
       // printf("%d \n",arr[i]);
    }
    
}