#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
void removeduplicatecharacter(char* s, int start, int end, char* result, int* resultIndex){
    bool freq[256] = {false};
    for(int i=start;i<=end;i++){
        if(!freq[(unsigned char)s[i]]){
            result[(*resultIndex)++] = s[i];
            freq[(unsigned char)s[i]] = true;
        }
    }
    result[(*resultIndex)++] = ' ';
}
int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);
    int start = 0;
    char result[100];
    int resultIndex = 0;
    for(int i=0;i<=len;i++){
        if(s[i]==' ' || s[i]=='\0'){
            removeduplicatecharacter(s,start,i-1,result,&resultIndex);
            start = i+1;
        }
    }
    if(resultIndex>0 && result[resultIndex-1]==' '){
        resultIndex--;
    }
    result[resultIndex] = '\0';
    printf("%s",result);
    return 0;
}

// Input : programming with passion and purpose
// output : progamin with pason and purse

//code is perfectly correct, fully optimized, and clean