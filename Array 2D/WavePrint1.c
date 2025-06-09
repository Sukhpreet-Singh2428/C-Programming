#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // wave print - 1
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
// 1 2 3   -->  1 2 3
// 4 5 6        6 5 4
// 7 8 9        7 8 9 