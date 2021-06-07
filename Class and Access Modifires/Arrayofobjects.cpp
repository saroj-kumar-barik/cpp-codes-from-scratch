#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        void setdata(int m){
            cout<<"Enter the value of a and b for the object "<<m<<endl;
            cin>>a>>b;
        }

        void display(){
            cout<<"A = "<<a<<" B = "<<b<<endl;
        }
};


int main(){
    ABC X[3];

    for(int i =0; i< 3;i++){
        X[i].setdata(i+1);
    }

    for(int i =0; i<3; i++){
        X[i].display();
        
    }
}
