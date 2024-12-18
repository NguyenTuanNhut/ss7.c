#include<stdio.h>
int main(){
    int arr[5]={2,3,6,9,1};
    int max=arr[0];
    int min=arr[0];
    for (int i=1;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for (int i=1;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("min la :%d max la :%d",min,max);
    return 0;

}