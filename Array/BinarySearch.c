#include<stdio.h>
int binarySearch(int* arr, int n, int target){    // Binary Search only applied on sorted arrays only
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d",&target);
    int idx = binarySearch(arr,n,target);
    printf("%d",idx);
    return 0;
}