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
    int main_diag_sum = 0;
    int sec_diag_sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                main_diag_sum += arr[i][j];
            }
            if(i+j==c-1){
                sec_diag_sum += arr[i][j];
            }
        }
    }
    printf("%d\n",main_diag_sum);
    printf("%d",sec_diag_sum);
    return 0;
}