#include<stdio.h>
#include<string.h>
void sort(char* str, int size){
    for(int i=1;i<size;i++){
        char curr = str[i];
        int prev = i-1;
        while(prev>=0 && str[prev]>curr){
            str[prev+1] = str[prev];
            prev--;
        }
        str[prev+1] = curr;
    }
}
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    // remove newline
    str1[strcspn(str1, "\n")] = '\0'; // strcpsn(): Only finds the first occurrence or we can use loop to change "\n" to '\0
    str2[strcspn(str2, "\n")] = '\0';
    // if lengths differ, can't be anagrams
    if(strlen(str1) != strlen(str2)){
        puts("No");
        return 0;
    }
    sort(str1, strlen(str1));
    sort(str2, strlen(str2));
    int flag=1;
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]!=str2[i]){
            flag = 0;
            break;
        }
    }
    if(flag) puts("Yes");
    else puts("No");
    return 0;
}