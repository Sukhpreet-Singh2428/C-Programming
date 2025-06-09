#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if(n%2!=0){
        int idx = n/2;
        printf("%d", arr[idx]);
    }
    else{
        int idx = n/2;
        int element = arr[idx-1] + arr[idx];
        int result = element/2;
        printf("%d", result);
    }
    return 0;
}