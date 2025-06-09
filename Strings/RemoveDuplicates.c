#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void removeduplicates(char* str, int len){
    bool freq[256] = {false};
    int index = 0;
    for(int i=0;i<len;i++){
        if(!freq[(unsigned char)str[i]]){
            freq[(unsigned char)str[i]] = true;
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}
int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int len = strlen(str);
    removeduplicates(str,len);
    printf("%s",str);
    return 0;
}