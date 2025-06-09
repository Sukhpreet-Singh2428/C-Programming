#include<stdio.h>
#include<stdbool.h>
bool reverse(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if(reverse(arr,n)){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}