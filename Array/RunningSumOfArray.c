#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<=i;j++){
            sum += arr[j];
        }
        printf("%d ",sum);
    }
    return 0;
}
// 4 3 2 1
// --> 4 7 9 10