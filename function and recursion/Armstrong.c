#include<stdio.h>
#include<stdbool.h>
int power(int base, int exp){
    int val = 1;
    for(int i=1;i<=exp;i++){
        val = val*base;
    }
    return val;
}
bool armstrong(int num){
    int temp = num;
    int count = 0;
    while(temp>0){
        count++;
        temp /= 10;
    }
    temp = num;
    int sum = 0;
    while(temp>0){
        int x = temp%10;
        sum += power(x,count);
        temp /= 10;
    }
    if(sum==num) return true;
    else return false;
}
int main(){
    int n;
    scanf("%d",&n);
    if(armstrong(n)) printf("Yes, armstrong");
    else printf("Not an armstrong");
    return 0;
}