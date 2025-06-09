#include<stdio.h>
#include<stdbool.h>
// void duplicate(int* arr, int n){       // print in increasing number order
//     int freq[1001] = {0};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<1001;i++){
//         if(freq[i]>1) printf("%d ",i);
//     }
// }
// void duplicate(int* arr, int n){          // print in first duplicate appearance order
//     int freq[1001] = {0};
//     bool present[1001] = {false};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(!present[arr[i]]){
//             if(freq[arr[i]]>1){
//                 printf("%d ",arr[i]);
//                 present[arr[i]] = true;
//             }
//         }
//     }
// }
// void duplicate(int* arr, int n){              // print in first duplicate appearance order + negative number handle
//     int freq[2001] = {0};
//     bool present[2001] = {false};
//     for(int i=0;i<n;i++){
//         freq[arr[i] + 1000]++;
//     }
//     for(int i=0;i<n;i++){
//         if(!present[arr[i] + 1000]){
//             if(freq[arr[i]+1000]>1){
//                 printf("%d ",arr[i]);
//                 present[arr[i] + 1000] = true;
//             }
//         }
//     }
// }
// void duplicate(int* arr, int n){              // remove duplicates from array in original order
//     int freq[2001] = {0};
//     for(int i=0;i<n;i++){
//         freq[arr[i] + 1000]++;
//     }
//     int index = 0;
//     for(int i=0;i<n;i++){
//         if(freq[arr[i]+1000]==1){
//             arr[index++] = arr[i];
//         }
//     }
//     for(int i=0;i<index;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     duplicate(arr,n);
//     return 0;
// }
// void duplicate(int* arr, int n){         // now removes duplicates from an integer array while preserving the first occurrence order
//     bool freq[2001] = {false};
//     int index = 0;
//     for(int i=0;i<n;i++){
//         if(!freq[arr[i]+1000]){
//             freq[arr[i]+1000] = true;
//             arr[index++] = arr[i];
//         }
//     }
//     for(int i=0;i<index;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     duplicate(arr,n);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void reverse(char* s, int start, int end){
//     for(int i=start, j=end; i<=j; i++,j--){
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//     }
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     int start = 0;
//     for(int i=0;i<=len;i++){
//         if(s[i]==' ' || s[i]=='\0'){
//             reverse(s,start,i-1);
//             start = i+1;
//         }
//     }
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// void removeduplicates(char* s, int len){
//     bool freq[256] = {false};
//     int index = 0;
//     for(int i=0;i<len;i++){
//         if(!freq[(unsigned char)s[i]]){
//             freq[(unsigned char)s[i]] = true;
//             s[index++] = s[i];
//         }
//     }
//     s[index] = '\0';
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     removeduplicates(s,len);
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int r1,c1;
//     scanf("%d %d",&r1,&c1);
//     int arr[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int r2,c2;
//     scanf("%d %d",&r2,&c2);
//     int brr[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     if(c1==r2){
//         int res[r1][c2];
//         int cr = r2;
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c2;j++){
//                 res[i][j] = 0;
//                 for(int k=0;k<cr;k++){
//                     res[i][j] += arr[i][k]*brr[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c2;j++){
//                 printf("%d ",res[i][j]);
//             }
//             printf("\n");
//         }
//     } else{
//         printf("Cannot multiplied");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #include<ctype.h>
// void removeduplicatecharacter(char* s, int start, int end, char* result, int* resultIndex){
//     bool freq[256] = {false};
//     for(int i=start;i<=end;i++){
//         if(!freq[(unsigned char)s[i]]){
//             result[(*resultIndex)++] = s[i];
//             freq[(unsigned char)s[i]] = true;
//         }
//     }
//     result[(*resultIndex)++] = ' ';
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     int start = 0;
//     char result[100];
//     int resultIndex = 0;
//     for(int i=0;i<=len;i++){
//         if(s[i]==' ' || s[i]=='\0'){
//             removeduplicatecharacter(s,start,i-1,result,&resultIndex);
//             start = i+1;
//         }
//     }
//     if(resultIndex>0 && result[resultIndex-1]==' '){
//         resultIndex--;
//     }
//     result[resultIndex] = '\0';
//     printf("%s",result);
//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>
// void removeduplicate(int* arr, int n){
//     bool freq[2001] = {false};
//     int index = 0;
//     for(int i=0;i<n;i++){
//         if(!freq[arr[i]+1000]){
//             arr[index++] = arr[i];
//             freq[arr[i]+1000] = true; 
//         }
//     }
//     for(int i=0;i<index;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     removeduplicate(arr,n);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void togglecase(char* s,int len){
//     for(int i=0;i<len;i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             s[i] = s[i] + 32;
//         }else if(s[i]>='a' && s[i]<='z'){
//             s[i] = s[i] - 32;
//         }
//     }
//     printf("%s",s);
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     togglecase(s,len);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// void newline(char* s, int start, int end){
//     for(int i=start;i<=end;i++){
//         printf("%c",s[i]);
//     }
//     printf("\n");
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     int start = 0;
//     for(int i=0;i<=len;i++){
//         if(s[i]==' ' || s[i]=='\0'){
//             newline(s,start,i-1);
//             start = i+1;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #include<stdbool.h>
// void sort(char* s, int len){        // sorting approach 
//     for(int i=0;i<len;i++){
//         char curr = s[i];
//         int prev = i-1;
//         while(prev>=0 && s[prev]>curr){
//             s[prev+1] = s[prev];
//             prev--;
//         }
//         s[prev+1] = curr;
//     }
// }
// bool anagram(char* s1, int len1, char* s2, int len2){
//     if(len1!=len2) return false;
//     sort(s1,len1);
//     sort(s2,len2);
//     if(strcmp(s1,s2)==0) return true;
//     else return false;
// }
// int main(){
//     char s1[100];
//     char s2[100];
//     fgets(s1, sizeof(s1), stdin);
//     fgets(s2, sizeof(s2), stdin);
//     s1[strcspn(s1,"\n")] = '\0';
//     s2[strcspn(s2,"\n")] = '\0';
//     int len1 = strlen(s1);
//     int len2 = strlen(s2);
//     for(int i=0;i<len1;i++){
//         s1[i] = tolower(s1[i]);
//     }
//     for(int i=0;i<len2;i++){
//         s2[i] = tolower(s2[i]);
//     }
//     if(anagram(s1,len1,s2,len2)) printf("Anagrams");
//     else printf("Not");
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #include<ctype.h>
// bool anagram(char* s1, int len1, char* s2, int len2){
//     if(len1!=len2) return false;
//     int freq1[256] = {0};
//     int freq2[256] = {0};
//     for(int i=0;i<len1;i++){
//         freq1[s1[i]]++;
//     }
//     for(int i=0;i<len2;i++){
//         freq2[s2[i]]++;
//     }
//     for(int i=0;i<256;i++){
//         if(freq1[i]!=freq2[i]) return false;
//     }
//     return true;
// }
// int main(){
//     char s1[100];
//     char s2[100];
//     fgets(s1, sizeof(s1), stdin);
//     fgets(s2, sizeof(s2), stdin);
//     s1[strcspn(s1,"\n")] = '\0';
//     s2[strcspn(s2,"\n")] = '\0';
//     int len1 = strlen(s1);
//     int len2 = strlen(s2);
//     for(int i=0;i<len1;i++){
//         s1[i] = tolower(s1[i]);
//     }
//     for(int i=0;i<len2;i++){
//         s2[i] = tolower(s2[i]);
//     }
//     if(anagram(s1,len1,s2,len2)) printf("Anagrams");
//     else printf("Not");
//     return 0;
// }

// #include<stdio.h>
// void movezeros(int* arr, int n){
//     int i=0;
//     int j=0;
//     while(i<n){
//         if(arr[i]==0) i++;
//         else{
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++;
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     movezeros(arr,n);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int j=0;j<c;j++){
//         if(j%2==0){
//             for(int i=r-1;i>=0;i--){
//                 printf("%d ",arr[i][j]);
//             }
//             printf("\n");
//         }else{
//             for(int i=0;i<r;i++){
//                 printf("%d ",arr[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void maskemail(char* s, int start, int end){
//     for(int i=start+1;i<end;i++){
//         s[i] = '*';
//     }
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     for(int i=0;i<len;i++){
//         if(s[i]=='@'){
//             maskemail(s,0,i-1);
//             break;
//         }
//     }
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// void title(char* s, int start, int end){
//     int j = start;
//     s[start++] = toupper(s[j]);
//     for(int i=start;i<=end;i++){
//         s[i] = tolower(s[i]);
//     }
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     int start = 0;
//     for(int i=0;i<=len;i++){
//         if(s[i]==' ' || s[i]=='\0'){
//             title(s,start,i-1);
//             start = i+1;
//         }
//     }
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n][3];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int fine = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==0){
//                 if(j==0) fine += 2000;
//                 else if(j==1) fine += 5000;
//                 else fine += 3000;
//             }
//         }
//     }
//     printf("%d",fine);
//     return 0;
// }

// #include<stdio.h>
// int reverse(int num){
//     int rev = 0;
//     while(num>0){
//         rev = rev*10 + num%10;
//         num = num/10;
//     }
//     return rev;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int copy[n];
//     for(int i=0;i<n;i++){
//         copy[i] = arr[i];
//     }
//     for(int i=0;i<n;i++){
//         copy[i] = reverse(copy[i]);
//     }
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==copy[i]) count++;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",copy[i]);
//     }
//     printf("\n");
//     printf("%d",count);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int pin;
//     scanf("%d",&pin);
//     int balance;
//     scanf("%d",&balance);
//     int withdrawal;
//     scanf("%d",&withdrawal);
//     if(pin!=1234){
//         printf("Incorrect PIN. Try again");
//         return 0;
//     }
//     if(withdrawal%100!=0){
//         printf("Enter a multiple of 100");
//         return 0;
//     }
//     if(withdrawal>balance){
//         printf("Insufficient Balance");
//         return 0;
//     }
//     printf("Transaction Successful: %d withdraw | Remaining Balance: %d",withdrawal,balance-withdrawal);
//     if(balance-withdrawal>=50000){
//         printf("\n");
//         printf("Premium Account Status Achieved");
//     }
//     if(balance-withdrawal<500){
//         printf("\n");
//         printf("Warning: Low Balance");
//     }
//     return 0;
// }

// #include<stdio.h>
// void palindrome(long long num){
//     long long temp = num;
//     long long rev = 0;
//     while(temp>0){
//         rev = rev*10 + temp%10;
//         temp /= 10;
//     }
//     if(rev==num) printf("%d, Number is Palindrome\n",num);
//     else printf("%d, Number is not a Palindrome\n",num);
// }
// void sum(long long n){
//     long long sum = 0;
//     while(n>0){
//         sum += n%10;
//         n /= 10;
//     }
//     palindrome(sum);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     long long arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%lld",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         long long temp = arr[i];
//         int digits = 0;
//         while(temp>0){
//             digits++;
//             temp /= 10;
//         }
//         if(digits!=10) printf("INVALID NUMBER\n");
//         else sum(arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int maxViews = INT_MIN;
//     int maxID = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxViews){
//             maxViews = arr[i];
//             maxID = i;
//         }
//     }
//     printf("%d",maxID);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int tier;
//     scanf("%d",&tier);
//     int extra;
//     scanf("%d",&extra);
//     int fee;
//     scanf("%d",&fee);
//     float scholarship;
//     if(tier==1) scholarship = fee*0.2;
//     else if(tier==2) scholarship = fee*0.15;
//     else scholarship = fee*0.1;
//     if(extra>5) scholarship += fee*0.05;
//     printf("%d\n",(int)round(scholarship));
//     if(scholarship>50000) scholarship -= scholarship*0.3;
//     else if(scholarship<=50000 && scholarship>25000) scholarship -= scholarship*0.2;
//     else scholarship -= scholarship*0.1;
//     printf("%d",(int)round(scholarship));
//     return 0;
// }

// #include<stdio.h>
// int fibo(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fibo(n-1)+fibo(n-2); 
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         int x = fibo(i);
//         printf("%d ",x);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// #include<math.h>
// bool perfectsquare(int num){
//     // for(int i=0;i<=num;i++){
//     //     if(i*i==num) return true;
//     // }
//     // return false;
//     int root = sqrt(num);
//     if(root*root==num) return true;
//     else return false;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     for(int i=a;i<=b;i++){
//         if(perfectsquare(i)) printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int even[n];
//     int e = 0;
//     int odd[n];
//     int o = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             even[e++] = arr[i];
//         }else{
//             odd[o++] = arr[i];
//         }
//     }
//     for(int i=0;i<e;i++){
//         printf("%d ",even[i]);
//     }
//     printf("\n");
//     for(int i=0;i<o;i++){
//         printf("%d ",odd[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<float.h>
// int main(){
//     int arr[7][3];
//     for(int i=0;i<7;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     float hottest = -FLT_MAX;
//     int hotday = -1;
//     float coldest = FLT_MAX;
//     int coldday = -1;
//     for(int i=0;i<7;i++){
//         int sum = 0;
//         for(int j=0;j<3;j++){
//             sum += arr[i][j];
//         }
//         float avg = sum/3.0;
//         printf("%.1f\n",avg);
//         if(avg>hottest){
//             hottest = avg;
//             hotday = i+1;
//         }
//         if(avg<coldest){
//             coldest = avg;
//             coldday = i+1;
//         }
//     }
//     if(hotday==coldday) printf("Stable weather throughout the week");
//     else{
//         printf("%d\n",hotday);
//         printf("%d\n",coldday);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// #include<ctype.h>
// bool isconsonant(char ch){
//     ch = tolower(ch);
//     if((ch>='a' && ch<='z') && !(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')) return true;
//     return false;
// }
// bool isvowel(char ch){
//     ch = tolower(ch);
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
//     return false;
// }
// void count(char* s, int start, int end){
//     int v=0;
//     int c=0;
//     for(int i=start;i<=end;i++){
//         if(isvowel(s[i])) v++;
//         if(isconsonant(s[i])) c++;
//     }
//     printf("%d %d",v,c);
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     for(int i=0;i<len;i++){
//         if(s[i]=='@'){
//             count(s,0,i-1);
//             break;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int min(int a, int b){
//     if(a<b) return a;
//     else return b;
// }
// void gcd(int x, int y){
//     for(int i=min(x,y);i>=1;i--){
//         if(x%i==0 && y%i==0){
//             printf("%d",i);
//             break;
//         }
//     }
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     gcd(a,b);
//     return 0;
// }
// int gcd(int a, int b){
//     if(b==0) return a;
//     return gcd(b,a%b);
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int x = gcd(a,b);
//     printf("%d",x);
//     return 0;
// }

// #include<stdio.h>
// int digitalroot(int x){
//     int sum = 0;
//     while(x>0){
//         sum += x%10;
//         x = x/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     while(n>=10){
//         n = digitalroot(n);
//     }
//     printf("%d",n);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// void removeduplicate(char* s, int len){
//     bool present[256] = {false};
//     int j = 0;
//     for(int i=0;i<len;i++){
//         if(!present[s[i]]){
//             s[j++] = s[i];
//             present[s[i]] = true;
//         }
//     }
//     s[j] = '\0';
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     removeduplicate(s,len);
//     printf("%s",s);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int countJump(int n){
//     if(n==0) return 1;
//     if(n<0) return 0;
//     return countJump(n-1) + countJump(n-2);
// }
// int main(){
//     int jump;
//     scanf("%d",&jump);
//     if(jump<=0 || jump>30){
//         printf("Invalid input!");
//         return 0;
//     }
//     else{
//         int x = countJump(jump);
//         printf("%d",x);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         for(int j=i-1;j>=1;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// #include<math.h>
// bool check(int vehicle, float efficient){
//     if(vehicle==1){
//         if(efficient>=15) return true;
//         else return false;
//     }else if(vehicle==2){
//         if(efficient>=12) return true;
//         else return false;
//     }else{
//         if(vehicle==3){
//             if(efficient>=8) return true;
//             else return false;
//         }
//     }
//     return false;
// }
// int main(){
//     int distance;
//     scanf("%d",&distance);
//     int fuel;
//     scanf("%d",&fuel);
//     int vehicle;
//     scanf("%d",&vehicle);
//     int road;
//     scanf("%d",&road);
//     float efficient = (float)distance/(float)fuel;
//     if(road==2) efficient -= 0.10*efficient;
//     else if(road==3) efficient -= 0.20*efficient;
//     if(check(vehicle,efficient)){
//         printf("%.2f km/l, Fuel efficient car.",efficient);
//     }else{
//         printf("%.2f km/l, Not fuel-efficient.",efficient);
//     }
//     return 0; 
// }

// #include<stdio.h>
// int main(){
//     int balance;
//     scanf("%d",&balance);
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max = 1;
//     int withdrawn = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%100!=0) continue;
//         if(max<=3 && arr[i]<balance){
//             withdrawn += arr[i];
//             balance -= arr[i];
//             max++;
//         }
//     }
//     printf("%d",withdrawn);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int even[num];
//     int odd[num];
//     int e=0;
//     int o=0;
//     while(num>0){
//         int x = num%10;
//         if(x%2==0) even[e++] = x;
//         else odd[o++] = x;
//         num = num/10;
//     }
//     if(e>=o){
//         int sum = 0;
//         for(int i=0;i<e;i++){
//             sum += even[i];
//         }
//         printf("%d",sum);
//     }else{
//         int sum = 0;
//         for(int i=0;i<o;i++){
//             sum += odd[i];
//         }
//         printf("%d",sum);
//     }
//     return 0;
// }

// #include<stdio.h>
// void letter(int n){
//     char freq[27];
//     char ch = 'A';
//     for(int i=1;i<27;i++){
//         freq[i] = ch++;
//     }
//     printf("%c",freq[n]);
// }
// int sum(int n){
//     int sum = 0;
//     while(n>0){
//         sum += n%10;
//         n = n/10;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     while(num>26){
//         num = sum(num);
//     }
//     letter(num);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// void product(int* arr, int n){
//     int freq[100001] = {0};
//     bool present[100001] = {false};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(!present[arr[i]]){
//             printf("%d %d\n",arr[i],freq[arr[i]]);
//             present[arr[i]] = true;
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     product(arr,n);
//     return 0;
// }

// #include<stdio.h>
// void sort(int* arr, int n){
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr;
//     }
// }
// void top5video(int* arr, int n){
//     sort(arr,n);
//     if(n>5){
//         for(int i=0;i<5;i++){
//             printf("%d ",arr[n-1-i]);
//         }
//     }else{
//         for(int i=n-1;i>=0;i--){
//             printf("%d ",arr[i]);
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     top5video(arr,n);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void compression(char* s, int len){
//     char compressed[100];
//     int j = 0;
//     for(int i=0;i<len;){
//         char ch = s[i];
//         int count = 1;
//         while(i+1<len && s[i+1]==ch){
//             count++;
//             i++;
//         }
//         compressed[j++] = ch;
//         char strcount[10];
//         sprintf(strcount, "%d", count);
//         for(int k=0;strcount[k]!='\0';k++){
//             compressed[j++] = strcount[k];
//         }
//         i++;
//     }
//     compressed[j] = '\0';
//     printf("%s",compressed);
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     int len = strlen(s);
//     compression(s,len);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void expandaroundcentre(char* s, int left, int right, int* start, int* maxlen){
//     while(left>=0 && right<strlen(s) && s[left]==s[right]){
//         if(right-left+1>*maxlen){
            // *maxlen = right-left+1;
            // *start = left;
//         }
//         left--;
//         right++;
//     }
// }
// void longestpalindrome(char* s){
//     int n = strlen(s);
//     int start = 0;
//     int maxlen = 1;
//     for(int i=0;i<n;i++){
//         expandaroundcentre(s,i,i,&start,&maxlen);
//         expandaroundcentre(s,i,i+1,&start,&maxlen);
//     }
//     for(int i=start;i<start+maxlen;i++){
//         printf("%c",s[i]);
//     }
// }
// int main(){
//     char s[100];
//     fgets(s, sizeof(s), stdin);
//     s[strcspn(s,"\n")] = '\0';
//     longestpalindrome(s);
//     return 0;
// }