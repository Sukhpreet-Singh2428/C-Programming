#include<stdio.h>
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int i = 0; // stores non - zeros
    int j = 0; // transverse
    while(j<n){
        if(arr[j]==0){
            j++;
        }else{
            swap(&arr[i],&arr[j]);
            i++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}