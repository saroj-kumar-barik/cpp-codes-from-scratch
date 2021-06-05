#include<iostream>
using namespace std;

class XYZ{
    int a,b;

    public:
        void setData(int a, int b){
            XYZ::a = a;
            XYZ::b = b;
        }
        XYZ add(XYZ X,XYZ Y){
            XYZ M;
            M.a = X.a+Y.a;
            M.b = X.b+Y.b;
            return M;
        }
        XYZ sub(XYZ X,XYZ Y){
            XYZ M;
            M.a = X.a-Y.a;
            M.b = X.b-Y.b;
            return M;
        }

        void display(XYZ X){
            cout<<"A= "<<X.a<<" and B = "<<X.b<<endl;
        }
};

int main(){
    XYZ P;
    P.setData(11,22);
    XYZ Q;
    Q.setData(33,44);

    XYZ X = X.add(P,Q);
    XYZ Y = Y.sub(P,Q);

    X.display(X);
    Y.display(Y);

}
