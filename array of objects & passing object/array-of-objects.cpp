#include<iostream>
using namespace std;

class ObjectArray{
    int a;
    int b;
    public :
        void setData(){
            a = 10;
            cout<<"enter value of b : ";
            cin>>b;
        }

        void getData(){
            cout<<"A= "<<a<<" B = "<<b<<endl;
        }
};

int main(){
    ObjectArray obj[3];

    for(int i =0; i < 3; i++){
        obj[i].setData();
        obj[i].getData();
    }
}