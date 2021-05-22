#include<iostream>
using namespace std;
// Adding two objects using Friedn Function
class X;

class Y{
    int val1;
    public:
        void setData(int data){
            val1 = data;
        }
    friend int sum(X,Y);    
};
 
class X{
    int val2;
    public:
        void setData(int data){
            val2 = data;
        }
    friend int sum(X,Y);    
};

int sum(X o1, Y o2){
    return o1.val2 + o2.val1;
}

int main(){
    X o1;
    Y o2;

    o1.setData(11);
    o2.setData(11);

    int res = sum(o1,o2);

    cout<<res<<endl;
}