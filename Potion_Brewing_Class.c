/*D. Potion Brewing Class
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Alice's potion making professor gave the following assignment to his students: brew a potion using n ingredients, such that the proportion of ingredient i in the final potion is ri>0 (and r1+r2+⋯+rn=1).

He forgot the recipe, and now all he remembers is a set of n−1 facts of the form, "ingredients i and j should have a ratio of x to y" (i.e., if ai and aj are the amounts of ingredient i and j in the potion respectively, then it must hold ai/aj=x/y), where x and y are positive integers. However, it is guaranteed that the set of facts he remembers is sufficient to uniquely determine the original values ri.

He decided that he will allow the students to pass the class as long as they submit a potion which satisfies all of the n−1 requirements (there may be many such satisfactory potions), and contains a positive integer amount of each ingredient.

Find the minimum total amount of ingredients needed to make a potion which passes the class. As the result can be very large, you should print the answer modulo 998244353.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
    int data;
    int key;
    node* next;
}node;
FILE* fp;
#define cap_phat(n) (node**)malloc(sizeof(node*)*(n+1))
#define cap_phatd() (node*)malloc(sizeof(node))
#define ll long long
bool mem[200000];
long long LCD(int a, int b){
    int c=a,d=b;
    while(a!=b){
        a>b?a=a-b:b=b-a;
    }
    return (long long)c*d/a;
}
void push_front(node* &A,int n, int key){
    node* newnode=cap_phatd();
    newnode->data=n;
    newnode->key=key;
    newnode->next=NULL;
    if(A==NULL){
        A=newnode;
    }else{
        newnode->next=A;
        A=newnode;
    }
}
long long DFS(int n,node** A){
    if(A[n]==NULL)
        return 1;
    else{
        node* cur=A[n];
        mem[n]=0;
        long long c=1;
        while(cur!=NULL){
            if(mem[cur->data]){
                c=LCD(c,LCD(DFS(cur->data,A),cur->key));
            }
            cur=cur->next;
        }
        return c;
    }
}
ll slove(){
    int n;fscanf(fp,"%d",&n);
    node** A=cap_phat(n);
    for(int i=1;i<=n;i++){
        A[i]=NULL;
    }
    for(int i=0;i<n-1;i++){
        int x,y,a,b;
        fscanf(fp,"%d%d%d%d",&x,&y,&a,&b);
        push_front(A[x],y,a);
        push_front(A[y],x,b);
    }
    printf("%ld\n",DFS(1,A));
    for(int i=0;i<=n;i++){
        free(A[i]);
    }
    free(A);
    return 0;
}
int main(){
    fp=fopen("data.txt","r");
    int t;
    memset(mem,1,sizeof(mem));
    fscanf(fp,"%d",&t);
    while(t--){
        printf("%ld\n",slove());
    }
    fclose(fp);
    return 0;
}