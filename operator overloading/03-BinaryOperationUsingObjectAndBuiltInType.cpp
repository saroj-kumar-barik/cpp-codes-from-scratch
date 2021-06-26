#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        ABC();
        ABC(int a, int b);
        ABC operator*(int);
        friend ABC operator+(ABC &,int);
        friend ABC operator+(int,ABC &);
        void display(); 
};

ABC::ABC(){
    
}

ABC::ABC(int a, int b){
    ABC::a = a;
    ABC::b = b;
}

ABC ABC::operator*(int N){
    ABC T;
    T.a = N * a;
    T.b = N * b; 
    return T;
}

ABC operator+(ABC &M, int N){
    ABC T;
    T.a = M.a + N;
    T.b = M.b + N;
    return T;
}

ABC operator+( int N,ABC &M){
    ABC T;
    T.a = M.a + N;
    T.b = M.b + N;
    return T;
}

void ABC::display(){
     cout<<"A = "<<a<<" B= "<<b<<endl;
}

int main(){
    ABC X(11,22),Y(33,44),P,Q;
    P = X.operator*(5);
    P = X * 5;
    // P = 5 * X;
    // P = 5 * X.operator*(5);
    P.display();

    Q = 10 + X;
    Q.display();
    Q = Y + 10;    
    Q.display();
}

