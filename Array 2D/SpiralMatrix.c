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
    // spiral print
    int minr = 0;
    int maxr = r-1;
    int minc = 0;
    int maxc = c-1;
    int tne = r*c;
    int count = 0;
    while(count<tne){
        // print the minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        // print the maximum column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        // print the maximum row
        for(int j=maxc;j>=minc;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        // print the minimum column
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return 0;
}
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9 

// 3 4
// 1 2 3 4         --> 1 2 3 4 8 12 11 10 9 5 6 7
// 5 6 7 8
// 9 10 11 12