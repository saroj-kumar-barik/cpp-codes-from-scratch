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

        void operator--(){
            a -=2; // 9
            b = b--;
            --b = ++b; // -23
        }
        // to apply unary ++ as postfix, we must need an parameter of type int. 
        void operator--(int){
            a +=2;
            b = -+b;
        }
        
};

int main(){
    ABC X,Y;
    X.setdata(11,-22);
    Y.setdata(-33,44);

    --X;

    X.display();

    Y--;
    Y.display();
}