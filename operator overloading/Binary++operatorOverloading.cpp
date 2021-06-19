#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        ABC(int a, int b){
            ABC::a = a;
            ABC::b = b;
        }

        ABC(){
            
        }

        ABC operator+(ABC X){
            a = X.a - a;
            b = X.b - b;
            return X;
        }
        friend void operator+(ABC &M){
            M.a = M.a + M.b;
            M.b = M.a - M.b;
        }

        void display(){
            cout<<"A= "<<a<<"B = "<<b<<endl;
        }
};

int main(){
    ABC X(11,21),Y(33,44),P,Q;
    operator+(X);
    P.display();
    // P.display();
    // P.display();
    Q = P.operator+(X);
    // X.display();
    // Y.display();
    P.display();
    // P.display();
    // P.display();
    // Q.display();

}