#include<stdio.h>
int countJump(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    return countJump(n-1) + countJump(n-2);
}
int main(){
    int jump;
    scanf("%d",&jump);
    if(jump<=0 || jump>30){
        printf("Invalid input!");
        return 0;
    }
    else{
        int x = countJump(jump);
        printf("%d",x);
    }
    return 0;
}
// A game character needs to reach the top of a staircase with n steps. The character can jump 1 
// step or 2 steps at a time. Find the number of ways the character can reach the top using 
// recursion. 
// For example, if the staircase has 4 steps, the character can reach the top in 5 ways: 
// 1. 1-1-1-1 
// 2. 1-1-2 
// 3. 1-2-1 
// 4. 2-1-1 
// 5. 2-2
// Implement a recursive function to compute the number of ways the character can reach the 
// nth step. For zero and negative input, print “Invalid input! Please enter a positive integer 
// between 1 and 30.” 