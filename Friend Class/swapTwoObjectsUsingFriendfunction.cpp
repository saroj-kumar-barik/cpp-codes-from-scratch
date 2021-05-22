#include<iostream>
using namespace std;
class Y;

class X {
    int val1;
    friend void exchange(X &,Y &);

    public:
        void setdata(int n1){
            val1 = n1;
        }

        void display(){
            cout<<val1<<endl;
        }

};
class Y {
    int val2;
    friend void exchange(X &,Y &);

    public:
        void setdata(int n1){
            val2 = n1;
        }

     void display(){
            cout<<val2<<endl;
        }    

};
// & - refers to alias
void exchange(X &o1,Y &o2){
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main(){
    X o1;
    Y o2;

    o1.setdata(11);
    o2.setdata(22);

    cout<<"value of objects before swaooing "<<endl;
    o1.display();
    o2.display();

    exchange(o1,o2);

    cout<<"value of objects after swaooing "<<endl;
    o1.display();
    o2.display();
}