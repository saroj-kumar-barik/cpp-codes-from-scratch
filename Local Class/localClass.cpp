#include<iostream>
using namespace std;

void sum(){

    class XYZ{
        int a,b;
        
        public:
            void setdata(int a, int b){
                XYZ::a = a;
                XYZ::b = b;
            }

            void getdata(){
                cout<<" value of object is : "<<a<<" "<<b<<endl;
            }
    };


   
    XYZ P;
    P.setdata(11,22);
    P.getdata();
}

int main(){
    sum();
}