#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        void setdata(int a, int b){
            ABC::a = a;
            ABC::b = b;
        }
        void display(){
            cout<<"A= "<<a<<" B = "<<b<<endl;
        }

        void operator+(){
            a = -a;
            b = -b;
        }

        friend void operator-(ABC &A){
            A.a = -A.a;
            A.b = -A.b;
        }
};

int main(){
    ABC X,Y,Z,P;
    X.setdata(11,-22);
    Y.setdata(-33,44);
    Z.setdata(66,-55);
    P.setdata(-77,88);

    X.display();
    Y.display();
    Z.display();
    P.display();

    +X; // implicit call to operator+ through object X (X.operator+())
    Y.operator+(); // explicit call
    -Z; // here Z is a parameter to the function - opertator-(ABC &A) // implicit call
    operator-(P);

    X.display();
    Y.display();
    Z.display();
    P.display();

}