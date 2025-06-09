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
    int max_sum = 0;
    int row;
    for(int i=0;i<r;i++){
        int sum = 0;
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
        if(sum>max_sum){
            max_sum = sum;
            row = i+1;
        }
    }
    printf("Row %d with maximum sum : %d",row,max_sum);
    return 0;
}