#include<stdio.h>
#include<string.h>
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);  
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    int len1 = strlen(str1);
    for(int j=0;str2[j]!='\0';j++){
        str1[len1+j] = str2[j];
    }
    str1[len1+strlen(str2)] = '\0';
    puts(str1);
    return 0;
}