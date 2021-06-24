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

        ABC operator-(ABC X){
            a = X.a - a;
            b = X.b - b;
            return X;
        }
        friend ABC operator+(ABC &M, ABC &N){
            M.a = M.a + N.b;
            M.b = M.a - N.b;
        }

        void display(){
            cout<<"A= "<<a<<"B = "<<b<<endl;
        }
};

int main(){
    ABC X(11,21),Y(33,44),P,Q,R;

    // in binary operator overloading : 
    // two argument if it is a friend function
    // one argument if it is a normal non static mf.
    R = operator+(X,Y);
    R.display();

    R = X + Y; // implicit call to operator+
    // R = operator+(X,Y); // explicit call to operator+
   
    Q = P.operator-(X);
    Q.display();
}