#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int notfound = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        int alreadycounted = 0;
        int idx = 0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                alreadycounted=1;
                break;
            }
        }
        if(alreadycounted) continue;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                idx = i;
            }
        }
        if(count>(n/2)){
            printf("%d", arr[idx]);
            break;
        }else{
            notfound = 1;
        }
    }
    if(notfound){
        printf("-1");
    }
    return 0;
}