#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = INT_MIN;
    int row,column;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
                row = i;
                column = j;
            }
        }
    }
    printf("Maximum Element is %d and it's index is [%d][%d]",max,row,column);
    return 0;
}