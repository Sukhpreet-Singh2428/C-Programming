#include<stdio.h>
int main(){
    int r1,c1;
    scanf("%d %d",&r1,&c1);
    int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r2,c2;
    scanf("%d %d",&r2,&c2);
    int brr[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(c1==r2){
        int res[r1][c2];
        int cr = r2;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                res[i][j] = 0;
                for(int k=0;k<cr;k++){
                    res[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    } else{
        printf("Can't be multiply");
    }
    return 0;
}