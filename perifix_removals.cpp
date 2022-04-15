/*B. Prefix Removals
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a string s consisting of lowercase letters of the English alphabet. You must perform the following algorithm on s:

Let x be the length of the longest prefix of s which occurs somewhere else in s as a contiguous substring (the other occurrence may also intersect the prefix). If x=0, break. Otherwise, remove the first x characters of s, and repeat.
A prefix is a string consisting of several first letters of a given string, without any reorders. An empty prefix is also a valid prefix. For example, the string "abcd" has 5 prefixes: empty string, "a", "ab", "abc" and "abcd".

For instance, if we perform the algorithm on s= "abcabdc",

Initially, "ab" is the longest prefix that also appears somewhere else as a substring in s, so s= "cabdc" after 1 operation.
Then, "c" is the longest prefix that also appears somewhere else as a substring in s, so s= "abdc" after 2 operations.
Now x=0 (because there are no non-empty prefixes of "abdc" that also appear somewhere else as a substring in s), so the algorithm terminates.
Find the final state of the string after performing the algorithm.*/

#include <bits/stdc++.h>

using namespace std;
int A[26];
void slove(){
    memset(A,0,sizeof(A));
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        A[s[i]-97]++;
    }
    for(int i=0;i<s.size();i++){
        if(A[s[i]-97]>1){
            A[s[i]-97]--;
        }else{
            for(int j=i;j<s.size();j++){
                cout<<s[j];
            }
            break;
        }
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        slove();
    }
   return 0; 
}