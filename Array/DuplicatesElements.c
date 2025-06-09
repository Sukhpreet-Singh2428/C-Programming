// #include<stdio.h>                          // Brute force approach
// #include<limits.h>
// void sort(int* arr, int n){
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr;
//     }
// }
// void duplicate(int* arr, int n){
//     int flag = INT_MAX;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1] && arr[i]!=flag){
//             printf("%d ",arr[i]);
//             flag = arr[i];
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     sort(arr,n);
//     duplicate(arr,n);
//     return 0;
// }


#include<stdio.h>
#include<stdbool.h>
// void duplicate(int* arr, int n){       // print in increasing number order
//     int freq[1001] = {0};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<1001;i++){
//         if(freq[i]>1) printf("%d ",i);
//     }
// }
void duplicate(int* arr, int n){          // print in first duplicate appearance order
    int freq[1001] = {0};
    bool present[1001] = {false};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(!present[arr[i]]){
            if(freq[arr[i]]>1){
                printf("%d ",arr[i]);
                present[arr[i]] = true;
            }
        }
    }
}
// void duplicate(int* arr, int n){              // print in first duplicate appearance order + negative number handle
//     int freq[2001] = {0};
//     bool present[2001] = {false};
//     for(int i=0;i<n;i++){
//         freq[arr[i] + 1000]++;
//     }
//     for(int i=0;i<n;i++){
//         if(!present[arr[i] + 1000]){
//             if(freq[arr[i]+1000]>1){
//                 printf("%d ",arr[i]);
//                 present[arr[i] + 1000] = true;
//             }
//         }
//     }
// }
// void duplicate(int* arr, int n){              // remove duplicates from array in original order (which contains both +ve or -ve elements)
//     int freq[2001] = {0};
//     for(int i=0;i<n;i++){
//         freq[arr[i] + 1000]++;
//     }
//     int index = 0;
//     for(int i=0;i<n;i++){
//         if(freq[arr[i]+1000]==1){
//             arr[index++] = arr[i];
//         }
//     }
//     for(int i=0;i<index;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     duplicate(arr,n);
//     return 0;
// }
// void duplicate(int* arr, int n){         // now removes duplicates from an integer array while preserving the first occurrence order
//     bool freq[2001] = {false};
//     int index = 0;
//     for(int i=0;i<n;i++){
//         if(!freq[arr[i]+1000]){
//             freq[arr[i]+1000] = true;
//             arr[index++] = arr[i];
//         }
//     }
//     for(int i=0;i<index;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     duplicate(arr,n);
//     return 0;
// }