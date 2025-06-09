#include<stdio.h>
#include<stdbool.h>
bool uniqueOccurrences(int* arr, int arrSize) {
    int freq[2001] = {0};
    for(int i=0;i<arrSize;i++){
        freq[arr[i]+1000]++;
    }
    int freqoffreq[2001] = {0};
    for(int i = 0; i < 2001; i++) {
        if(freq[i] > 0) {
            if(freqoffreq[freq[i]] > 0) return false;
            freqoffreq[freq[i]] = 1;
        }
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(uniqueOccurrences(arr,n)) printf("True");
    else printf("False");
}
// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Input: arr = [1,2]
// Output: false