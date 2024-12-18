#include<stdio.h>
int main(){
    int n,y;
    printf("nhap hang");
    scanf("%d",&n);
    printf("nhap cot");
    scanf("%d",&y);
    int arr[n][y];
    printf("nhap mang");
    for(int i=0;i<n;i++){
    for(int j=0;j<y;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<y;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    return 0;
}