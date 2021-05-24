#include<iostream>
using namespace std;

class X{
    int a,b;
    int data1,data2,data3;
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
        //One argumenet constructor declartaion
        X(char);


        // Default argument of constructure
        X(int a, int b = 6, int c = 8){
            data1 = a;
            data2 = b;
            data3 = c;
        }



        void print(){
            cout<<ch<<" "<<a<<endl;
            cout<<data1<<" "<<data2<<" "<<data3;
        }
};

X::X(char c){
    ch = c;
}

int main(){
    // X o2(111,22);
    // Implicit call
    X o1;
    X o2('s',22);
    // Explicit Call
    X obj1 = X(11,22,33);
    o2.print();

    X o3('m');
    o3.print();

    X o4(11,22,33);
    o4.print();
}