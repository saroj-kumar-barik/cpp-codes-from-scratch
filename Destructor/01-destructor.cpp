#include<iostream>
using namespace std;

class ABC{
    static int a;
    public:
        ABC(){
            cout<<"Object "<<a++<<" is created"<<endl;
        }
        // A destructor is called automatically by the compiler
        ~ABC(){

            cout<<"Object "<<a--<<" is destroyed"<<endl;
        }
};

int ABC::a;

int main(){
    ABC X,Y,Z;
    
}