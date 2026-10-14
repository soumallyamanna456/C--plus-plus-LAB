#include<iostream>
#include<cmath>
using namespace std;
void Area(float r){
    float A = M_PI*r*r;
    cout<<"Area of the circle with radius "<<r<< " is "<<A<<endl;
}
void Area(float l,float b){
    float A= l*b;
    cout<<"Area of rectangle with length "<<l<<"and Breadth "<<b<<" is "<<A<<endl;
}
void Area(float a,float h,float p ){
    if((a+h)>p && (h+p)>a && (p+a)>h){
        float A=0;
        float s=((a+h+p)/2.0);
        A=sqrt(s*(s-a)*(s-h)*(s-p));
        cout<<"Area of the Tringle with side "<<a<<h<<p<<" is "<<A;
    }
    else{
        cout<<"INVALID";
    }
}
int main(){
    Area(7.6);
    Area(6,7);
    Area(3,5,7);
    return 0;
}