#include<iostream>
using namespace std;

class XYZ{
    int a,b;
    public:
        void friend sum(XYZ Q){
            int res = Q.a+Q.b;
            cout<<res<<endl;
        } 

        void setdata(int a, int b){
           XYZ::a = a;
           XYZ::b = b;
        }
};

int main(){
    XYZ P;
    P.setdata(11,22);
    sum(P);
   
}