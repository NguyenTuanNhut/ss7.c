#include<stdio.h>
int main(){
    int array[5]={1,5,0,2,6};
    int length=sizeof(array)/sizeof(int);
    for (int i=0;i<length;i++){
        printf("%d",array[i]);
    }
    printf("\ndo dai mang la: %d",length);
    return 0;

}