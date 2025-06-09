#include<stdio.h>
#include<string.h>
void reverse(char* s, int start, int end){
    for(int i=start,j=end;i<j;i++,j--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
int main(){
    char s[50];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';
    int len = strlen(s);
    int start = 0;
    for(int i=0;i<=len;i++){
        if(s[i]==' ' || s[i]=='\0'){
            reverse(s,start,i-1);
            start = i+1;
        }
    }
    puts(s);
    return 0;
}