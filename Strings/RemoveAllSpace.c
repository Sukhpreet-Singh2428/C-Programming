#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int j=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]!=' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    puts(str);
    return 0;
}