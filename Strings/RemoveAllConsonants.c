#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool isnotconsonants(char ch){
    ch = tolower(ch);
    if(ch>='a' && ch<='z' && !(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')) return false;
    return true;
}
int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);
    int j=0;
    for(int i=0;i<len;i++){
        if(isnotconsonants(s[i])) s[j++] = s[i];
    }
    s[j] = '\0';
    printf("%s",s);
    return 0;
}