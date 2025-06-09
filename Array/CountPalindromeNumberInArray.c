#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        int original = arr[i];
        int reverse = 0;
        if(arr[i]<0) continue;
        while(arr[i]){
            reverse = reverse*10 + arr[i]%10;
            arr[i] = arr[i]/10;
        }
        if(original==reverse){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}