#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max_f = 0;
    int idx = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        int alreadycount = 0;
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
                alreadycount = 1;
            }
            break;
        }
        if(alreadycount) continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(max_f<count){
            max_f = count;
            idx = i;
        }
    }
    printf("%d", arr[idx]);
    return 0;
}