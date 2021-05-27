#include<iostream>
using namespace std;

class X{
    int *a;
    int b;
    public:
        X(){
            cout<<"No argument constructor"<<endl;
            a = new int;
        }

        X(int x, int y){
            *a = x;
            b = y; 
        }

        void display(){
            cout<<*a<< "  "<<b<<endl;
        }

        X(X &obj){
            a = new int;
            // *a = *(obj.a); we will discuss this line tomorrow

            
            // the below line means the adress of obj( as we have passed o2 from main method).a which is a pointer is assigned to 'a' field which is of type  pointer 
            // a = obj.a;
            b = obj.b;
        }

};

int main(){
    
    X o1(11,22);
    X o2;
    o2.display();
    X o3 = o2;
    o3.display();
}