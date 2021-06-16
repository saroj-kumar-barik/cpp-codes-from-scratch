#include<iostream>
using namespace std;

class ABC{
    int a, b;
    ABC(int a, int b){
        ABC::a = a;
        ABC::b = b;
        cout<<"Two Argument Constructor.."<<endl;
        cout<<"A = "<<a<<" B = "<<b<<endl<<endl;

    }
    public:
        ABC(ABC &C){
            a = C.a = 33;
            b = C.b = 44;
            ABC(a,b);
        }
        ABC(){
            a=11;
            b=21;
        }
        void display(){
            cout<<"A = "<<a<<" B = "<<b<<endl;
        }

};

int main(){
    ABC X;
    X.display();
    
    ABC Y(X);
    Y.display();

}