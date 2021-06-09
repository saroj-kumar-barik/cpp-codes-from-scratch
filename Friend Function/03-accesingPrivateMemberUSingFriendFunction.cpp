#include<iostream>
using namespace std;
class XYZ;
class ABC{
    int a,b;
    void friend accessDataMembers(ABC, XYZ);
    public:
        void setData(int, int);
        void display();
};

class XYZ{
    int c,d;
    void friend accessDataMembers(ABC, XYZ);
    public:
        void setData(int, int);
};

void ABC::setData(int a,int b){
    ABC::a = a;
    ABC::b = b;
}

void XYZ::setData(int c,int d){
    XYZ::c = c;
    XYZ::d = d;
}

void accessDataMembers(ABC P, XYZ Q){
    cout<<"Accessing private data memberrs of ABC : "<<P.a<<" "<<P.b<<endl; 
    cout<<"Accessing private data memberrs of XYZ : "<<Q.c<<" "<<Q.d<<endl; 
}


int main(){
    ABC P;
    XYZ Q;
    P.setData(11,22);
    Q.setData(33,44);

    accessDataMembers(P,Q);

}