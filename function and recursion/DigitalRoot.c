#include<stdio.h>
// int digitalRoot(int n) {
//     if (n == 0) return 0;
//     return (n % 9 == 0) ? 9 : n % 9;
// }
int digitalroot(int x){
    int sum = 0;
    while(x>0){
        sum += x%10;
        x = x/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n>=10){
        n = digitalroot(n);
    }
    printf("%d",n);
    return 0;
}