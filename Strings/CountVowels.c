#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
    return false;
}
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    int i = 0;
    int vowel = 0;
    while(str[i]!='\0'){
        if(isvowel(str[i])) vowel++;
        i++;
    }
    printf("%d",vowel);
    return 0;
}