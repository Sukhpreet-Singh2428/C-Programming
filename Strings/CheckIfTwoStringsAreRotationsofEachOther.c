#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char s2[100];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1,"\n")] = '\0';
    s2[strcspn(s2,"\n")] = '\0';
    if(strlen(s1)!=strlen(s2)){
        printf("No");
        return 0;
    }
    char concat[200];
    strcpy(concat,s1);
    strcat(concat,s1);
    if(strstr(concat,s2)) printf("Yes");
    else printf("No");
    return 0;
}