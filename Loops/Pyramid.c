#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         char letter = 'A';
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
//             printf("%c",letter++);
//         }
//         printf("\n");
//     }
//     return 0;
// }