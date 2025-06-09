#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool checkPalindrome(char* s, int len){
    int i=0;
    int j=len-1;
    while(i<j){
        if(islower(s[i])!=islower(s[j])) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    char s[50];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);
    if(checkPalindrome(s,len)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}