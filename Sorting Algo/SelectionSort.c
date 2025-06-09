#include<stdio.h>
void swap(int* i, int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
void selectionsort(int* arr, int n){
    for(int i=0;i<n-1;i++){
        int smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        swap(&arr[i],&arr[smallest]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}