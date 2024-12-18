#include<stdio.h>
int main(){
    int n,c;
    printf("nhap n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        c=1;
        while(c){
            scanf("%d",&arr[i]);
            if (arr[i]%2!=0){
                c=0;
            }
        }
    }
    return 0;
}