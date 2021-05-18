#include<iostream>
using namespace std;

class A {
    // only inside the class
    private:
        int a,b;
        int mul(int a,int b);
    // any where in the programe we can use    
    public :
        int c,d;
        // Declaratiom
        int sum(int c, int d);
        // Defination
        void getValue(){
            cout<<c<<endl<<d<<endl;
        }
    
    // protected can only be used inside class or child class (in case of inheritance)
    protected:
        int e,f;
        int sum(float c,int f);            
};

int A::sum(int a, int b){
    return a+b;
}

int A::sum(float a, int b){
    return a+b;
}

int main(){
    A obj;
    cout<<obj.sum(10,12)<<endl;
    cout<<obj.c<<endl;
    obj.getValue();
    // cout<<obj.sum(12.34f,34); // inaccessable
}