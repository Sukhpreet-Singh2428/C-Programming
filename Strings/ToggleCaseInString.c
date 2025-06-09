#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);                  // 'a' to 'z' = 97 to 122
    for(int i=0;i<len;i++){                 // 'A' to 'Z' = 65 to 90
        char ch = str[i];
        if(ch>='a' && ch<='z'){
            // ch = ch - 32;   // convert to uppercase
            ch = toupper(ch);
        } else if(ch>='A' && ch<='Z'){
            // ch = ch + 32;   // convert to lowercase
            ch = tolower(ch);
        } 
        str[i] = ch;
    }
    puts(str);
    return 0;
}