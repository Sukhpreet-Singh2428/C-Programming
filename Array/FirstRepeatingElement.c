#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int idx = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count = 1;
                idx = i;
                break;
            }
        }
        if(count) break;  // if finded then don't check further
    }
    if(count){
        printf("%d",arr[idx]);
    }else{
        printf("%d", -1);
    }
}