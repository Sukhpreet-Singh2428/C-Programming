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
    // wave print - 2
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=r-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int i=0;i<r;i++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
// 1 2 3   -->  7 4 1
// 4 5 6        2 5 8
// 7 8 9        9 6 3