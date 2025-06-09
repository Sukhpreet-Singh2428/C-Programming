#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void Frequency(char* s, int len){
    char freq[256] = {0};
    bool printed[256] = {false};
    for(int i=0;i<len;i++){
        freq[(unsigned char)s[i]]++;
    }
    for(int i=0;i<len;i++){
        unsigned char ch = s[i];
        if(!printed[ch]){
            printf("%c : %d\n", ch, freq[ch]);
            printed[ch] = true;
        }
    }
}
int main(){
    char s[50];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);
    Frequency(s,len);
    return 0;
}