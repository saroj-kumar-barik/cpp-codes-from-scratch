#include<iostream>
using namespace std;

class Test{
    int a,b;

    public:
        void setdata(int a, int b){
            Test::a = a;
            Test::b = b;
        }
        void getData(){
            cout<<"A = "<<a<<" B = "<<b;
        }
};

int main(){
    Test X;
    X.setdata(11,22);
    X.getData();

}