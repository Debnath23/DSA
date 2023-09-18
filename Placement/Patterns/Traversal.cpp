#include<stdio.h>

void display(int arr[],int n){
    //Code for Traversal
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100]={7,83,92,54,34};
    int size = 5;
    display(arr,size);
    return 0;
}