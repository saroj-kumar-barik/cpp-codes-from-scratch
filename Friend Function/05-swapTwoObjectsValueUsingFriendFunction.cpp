#include <iostream>
using namespace std;

class XYZ{
    int a,b;
    // int c,d;
    public:
        void setdata(int a, int b){
            XYZ::a = a;
            XYZ::b = b;
        }

        void friend swap(XYZ&,XYZ&);
        void display(XYZ P, XYZ Q){
            
            cout<<" Value of Objects P : "<<P.a<<" "<<P.b<<endl;
            cout<<" Value of Objects Q : "<<Q.a<<" "<<Q.b<<endl;
        }

};

void swap(XYZ &P, XYZ &Q){
    XYZ R;
    R.a = P.a;
    R.b = P.b;

    P.a = Q.a;
    P.b = Q.b;

    Q.a = R.a;
    Q.b = R.b;

}

int main(){
    XYZ P,Q;
    P.setdata(11,22);
    Q.setdata(33,44);
    
    cout<<" Before  swap : "<<endl;
    P.display(P,Q);

    swap(P,Q);

    cout<<" After swap : "<<endl;
    P.display(P,Q);
}