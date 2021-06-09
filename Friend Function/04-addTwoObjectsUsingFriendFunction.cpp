#include<iostream>
using namespace std;

class XYZ{
    int a,b;
    void friend summetion(XYZ P, XYZ Q){
        XYZ R;
        R.a = P.a + Q.a;
        R.b = P.b + Q.b;
        cout<< " addition result of Objects P and Q is : "<<R.a<<" , "<<R.b<<endl;
    }
    public:
        void setdata(int a, int b){
            XYZ::a = a;
            XYZ::b = b;
        }
};

int main(){
    XYZ P,Q,R;
    P.setdata(11,22);
    Q.setdata(11,33);

    summetion(P,Q);
    




}