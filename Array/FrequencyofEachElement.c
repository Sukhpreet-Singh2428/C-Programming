// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         int count=0;
//         int alreadycounted=0;
//         for(int k=0;k<i;k++){
//             if(arr[i]==arr[k]){
//                 alreadycounted=1;
//                 break;
//             }
//         }
//         if(alreadycounted) continue;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         printf("%d %d\n",arr[i],count);
//     }
//     return 0;
// }

#include<stdio.h>                   // this method is efficient and till Moderate range (e.g., -1000 to 1000) has C doesn't have built hash-map
void Frequency(int* arr, int n){
    // Step 1: Find min and max
    int max = arr[0], min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    // Step 2: Calculate range and create freq array
    int range = max - min + 1;
    int freq[range];
    for(int i = 0; i < range; i++) freq[i] = 0;
    // Step 3: Fill freq array using offset
    for(int i=0; i<n; i++){
        freq[arr[i] - min]++;  // to handle negative elements
    }
    // Step 4: Print frequency
    for (int i = 0; i < range; i++) {
        if (freq[i] > 0) {
            printf("%d : %d\n", i + min, freq[i]);
        }
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Frequency(arr,n);
    return 0;
}