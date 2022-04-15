#include <iostream>
#include <math.h>
const double PI=3.141592653589793238463;
using namespace std;
struct circle{
    double r;
    double x;
    double y;
};
double distance(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double square(double a, double b, double c){
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
double square(double r){
    return PI*r*r;
}
double square(double r, double d){
    double goc=asin(d/(r*2));
    return goc*r*r-square(r,r,d);
}
void _swap(circle cycle[]){
    if(cycle[0].r>cycle[1].r){
        circle c=cycle[0];
        cycle[0]=cycle[1];
        cycle[1]=c;
    }
}
int main(){
    freopen("data.txt","r",stdin);
    circle cycle[2];
    cin>>cycle[0].x>>cycle[0].y>>cycle[0].r;
    cin>>cycle[1].x>>cycle[1].y>>cycle[1].r;
    _swap(cycle);
    double khongcach2tam=distance(cycle[0].x,cycle[0].y,cycle[1].x,cycle[1].y);
    if(khongcach2tam>=cycle[1].r+cycle[0].r)
        cout<<0;
    else if(cycle[1].r>=khongcach2tam+cycle[0].r)
        printf("%.12lf",square(cycle[0].r));
    else{
        //1 laf cong lon , 0 laf vong be
        double doaidaycung=square(cycle[0].r,cycle[1].r,khongcach2tam)*2*2/khongcach2tam;
        if(cycle[0].r*cycle[0].r+khongcach2tam*khongcach2tam-cycle[1].r*cycle[1].r>=0){
            printf("%.12lf",square(cycle[0].r,doaidaycung)+square(cycle[1].r,doaidaycung));
        }
        else{
            printf("%.12lf",square(cycle[0].r)-square(cycle[0].r,doaidaycung)+square(cycle[1].r,doaidaycung));
        }
    }
}