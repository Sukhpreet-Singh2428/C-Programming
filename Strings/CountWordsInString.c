#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int count = 0;
    int inWord = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(!isspace(str[i]) && inWord==0){
            count++;
            inWord = 1;
        }else if(isspace(str[i])){
            inWord = 0;
        }
    }
    printf("%d", count);
    return 0;
}