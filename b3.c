#include<stdio.h>
int main(){
    int arr[5]={1,5,7,3,9};
    int c;
    c=1;
    for(int i=0;i<5;i++){
        if (arr[i]%2==0){
            printf("%d ",arr[i]);
            c=0;
        }
    }
    if(c){
        printf("khong co phan tu chan");
    }
    return 0;
}