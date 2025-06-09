#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int T;
    scanf("%d", &T);
    int flag1=INT_MAX,flag2=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==T && flag1!=arr[i] && flag2!=arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
                flag1 = arr[i];
                flag2 = arr[j];
            }
        }
    }
    return 0;
}