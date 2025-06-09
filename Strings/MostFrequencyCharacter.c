#include<stdio.h>
#include<string.h>
char mostFrequentCharacter(char* s, int len){
    char freq[256] = {0};
    for(int i=0;i<len;i++){
        freq[(unsigned char)s[i]]++;
    }
    char ch = '\0';
    int ch_count = 0;
    for(int i=0;i<256;i++){           // <-- returns Lexicographically smallest max (Lower ASCII value)
        if(freq[i]>ch_count){
            ch = (char)i;
            ch_count = freq[i];
        }
    }
    // for(int i=0;i<len;i++){        // <-- returns first max freq character in the string
    //     unsigned char c = s[i];
    //     if(freq[c]>ch_count){
    //         ch = c;
    //         ch_count = freq[c];
    //     }
    // }
    return ch;
}
int main(){
    char s[50];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);
    char x = mostFrequentCharacter(s,len);
    printf("%c",x);
    return 0;
}