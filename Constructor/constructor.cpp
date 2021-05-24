#include<iostream>
using namespace std;

class X{
    int a,b;
    char ch;
    public:
        // Default constructor or Zero Argument Constructor 
        X(){
            a = 11;
            b = 22;
            cout<<"A = "<<a<<" B= "<<b<<endl;
        }

        // Parameterized Constructor 
        // Overloading
        X(int n1,int n2){
            a = n1;
            b = n2;
            cout<<"A = "<<a<<" B= "<<b<<endl;
        }

        X(char c, int d){
            ch = c;
            a = d;
        }

        X(char);

        void print(){
            cout<<ch<<" "<<a<<endl;
        }
};

X::X(char c){
    ch = c;
}

int main(){
    // X o2(111,22);
    X o2('s',22);
    o2.print();
    X o3('m');
    o3.print();
    X o1;

}