#include<stdio.h>
#include<string.h>
int size(char* str, int start, int end){
    int k = 0;
    for(int i=start;i<=end;i++) k++;
    return k;
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int start = 0;
    int count=0,flag=0;
    int idx1=0,idx2=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]==' ' || str[i]=='\0'){
            flag = size(str,start,i-1);
            if(flag>count){
                count = flag;
                idx1 = start;
                idx2 = i-1;
            }
            start = i+1;
        }
    }
    for(int i=idx1; i<=idx2; i++){
        printf("%c",str[i]);
    }
    return 0;
}