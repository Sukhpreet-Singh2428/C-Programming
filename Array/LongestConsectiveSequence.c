#include<stdio.h>
void swap(int* i,int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
    return;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(&arr[i],&arr[smallestIdx]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    int count = 1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==1) count++;
    }
    printf("%d",count);
    return 0;
}