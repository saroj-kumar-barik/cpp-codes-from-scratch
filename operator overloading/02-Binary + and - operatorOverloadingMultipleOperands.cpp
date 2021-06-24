#include <iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        ABC();
        ABC(int a, int b);
        ABC operator+(ABC &);
        friend ABC operator-(ABC &,ABC &);
        void display();
};

ABC::ABC() {}

ABC::ABC(int a, int b) {
    ABC::a = a;
    ABC::b = b;
}

ABC ABC::operator+(ABC &P){
    return ABC (a+P.a, b+P.b);
}

ABC operator-(ABC &R,ABC &S){
    return ABC (R.a-S.a, R.b-S.b);
}

void ABC::display(){
    cout<<"A = "<<a<<" B= "<<b;
}

int main(){
    ABC X(11,22), Y(33,44), Z(55,66), T, U;
    T = X+Y+Z;
    // X.operator+(Y+Z) ->  X.operator+(Y.operator+(z))
    T.display();

    U = operator-(Z-Y,X);
    // operator-(Z,Y)-X ->  operator-(D-X)
    U.display();
}

