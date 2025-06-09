#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count = 0; //counting non-prime
    for(int i=0;i<n;i++){
        for(int j=2;j<=arr[i]-1;j++){
            if(arr[i]%j==0){   // This means not prime !!
                count++;  
                break;
            }
        }
        if(arr[i]==1 || arr[i]==0){
            count++;   // counting non-prime
        }
    }
    printf("%d", n-count); // size - nonprime = prime
    return 0;
}