/*C. Alice and the Cake
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Alice has a cake, and she is going to cut it. She will perform the following operation n−1 times: choose a piece of the cake (initially, the cake is all one piece) with weight w≥2 and cut it into two smaller pieces of weight ⌊w2⌋ and ⌈w2⌉ (⌊x⌋ and ⌈x⌉ denote floor and ceiling functions, respectively).

After cutting the cake in n pieces, she will line up these n pieces on a table in an arbitrary order. Let ai be the weight of the i-th piece in the line.

You are given the array a. Determine whether there exists an initial weight and sequence of operations which results in a.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains a single integer n (1≤n≤2⋅105).

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109).

It is guaranteed that the sum of n for all test cases does not exceed 2⋅105.

Output
For each test case, print a single line: print YES if the array a could have resulted from Alice's operations, otherwise print NO.

You may print each letter in any case (for example, YES, Yes, yes, yEs will all be recognized as positive answer).*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct queue_oder{
    long long key;
    queue_oder* next;
    queue_oder* pre;
};
queue_oder* head;
queue_oder* tail;
queue_oder* created(long long key){
    queue_oder* new_elm= new queue_oder;
    new_elm->key=key;
    new_elm->next=NULL;
    new_elm->pre=NULL;
    return new_elm;
}
void push(long long key){
    queue_oder* idex=created(key);
    if(head==NULL){
        head=idex;
        tail=head;
    }else{
        queue_oder* cur=tail;
        while(cur!=NULL){
            if(cur->key<=idex->key){
                cur=cur->pre;
            }else{
                if(cur==tail){
                    cur->next=idex;
                    idex->pre=cur;
                    tail=idex;
                    break;
                }else{
                    queue_oder* behind=cur->next;
                    cur->next=idex;
                    idex->pre=cur;
                    idex->next=behind;
                    behind->pre=idex;
                    break;
                }
            }
        }
    }
}
void pop(){
    queue_oder* cur=head->next;
    delete(head);
    head=cur;
    return;
}
void delete_(){
    if(head==NULL){
        return;
    }else{
        queue_oder* cur=head->next;
        delete(head);
        head=cur;
        delete_();
    }
}
queue <int> A;
long long sum_list;
bool greedy(){
    if(A.empty()&&head==NULL){
        return true;
    }else{
        if(A.front()==1){
            return true;
        }
        if(head->key<A.front()){
            return false;
        }
        if(head->key==A.front()){
            A.pop();
            pop();
            return greedy();
        }
        long long c=head->key;
        if(c%2==0){
            push(c/2);
            push(c/2);
            pop();
            return greedy();
        }else{
            push(c/2+1);
            push(c/2);
            pop();
            return greedy();
        }
    }
}
void slove(){
    sum_list=0;
    A={};
    int n;cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum_list+=arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        A.push(arr[i]);
    }
    push(sum_list);
    if(greedy()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    delete(arr);
    return;
}
int main(){
    // freopen("data.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        head=NULL;
        tail=NULL;
        slove();
    }
    return 0;
}