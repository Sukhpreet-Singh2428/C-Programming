#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    char sub[50];
    fgets(s, sizeof(s), stdin);
    fgets(sub, sizeof(sub), stdin);
    s[strcspn(s,"\n")] = '\0';
    sub[strcspn(sub,"\n")] = '\0';
    if(strstr(s,sub)) printf("Yes");
    else printf("No");
    return 0;
}