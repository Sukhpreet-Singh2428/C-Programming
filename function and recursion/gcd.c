#include<stdio.h>
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int x = gcd(a,b);
    printf("%d",x);
    return 0;
}

// #include<stdio.h>
// int min(int a, int b){
//     if(a<b) return a;
//     else return b;
// }
// void gcd(int x, int y){
//     for(int i=min(x,y);i>=1;i--){
//         if(x%i==0 && y%i==0){
//             printf("%d",i);
//             break;
//         }
//     }
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     gcd(a,b);
//     return 0;
// }