#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        int num = arr[i];
        int sum = 0;
        while(num){
            int m = num%10;
            sum = sum+m;
            num = num/10;
        }
        if(sum<0){
            sum = sum*-1;   // only for the test-case, it's sum is show of -ve number i.e, -12 --> 3
            printf("%d ", sum);
        }else{
            printf("%d ", sum);
        }
    }
    return 0;
}