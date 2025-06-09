#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // Top half (including middle row)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    // Bottom half (excluding middle row)
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Diamond --> made by two pyramids : upper and lower