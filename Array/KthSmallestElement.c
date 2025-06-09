#include<stdio.h>
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
int kthSmallest(int arr[],int n,int k){
    insertionSort(arr,n);
    if(k>n) return -1;
    return arr[k-1];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int val = kthSmallest(arr,n,k);
    printf("%d",val);
    return 0;
}