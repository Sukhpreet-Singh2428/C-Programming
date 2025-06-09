#include<stdio.h>
#include<stdbool.h>
void swap(int* i, int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
void bubblesort(int* arr, int n){
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}