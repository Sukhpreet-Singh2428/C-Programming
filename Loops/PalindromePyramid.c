// Numbers
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         for(int j=i-1;j>=1;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Letters
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",letter++);
        }
        letter -= 2;
        for(int j=i-1;j>=1;j--){
            printf("%c",letter--);
        }
        printf("\n");
    }
    return 0;
}