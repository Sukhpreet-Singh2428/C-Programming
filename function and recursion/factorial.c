#include<stdio.h>
void factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("%d",fact);
}
int main(){
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}

// #include<stdio.h>                   // <-- recursion
// int factorial(int n){
//     if(n==0 || n==1) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int result = factorial(n);
//     printf("%d",result);
//     return 0;
// }