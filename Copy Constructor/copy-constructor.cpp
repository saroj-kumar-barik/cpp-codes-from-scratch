#include<iostream>
using namespace std;


// If we dont craete a copy constructor Comiler will automatically create a copy constructoe by itself
// The prototype of a copy constructor looks like ->  ClassName(ClassName &obj)
class Point{
    int a,b;
    public:
        Point() {}
        Point(int x, int y) {
            cout<<"Two Argument Constructor"<<endl;
            a = x;
            b = y;
        }

        // Point(Point &obj){
        //     cout<<"Copy Constructor"<<endl;
        //     a = obj.a;
        //     b = obj.b;
        // }

        void display(){
            cout<<"The value of x = "<<a<<" and value of y = "<<b<<endl;
        }

};

int main(){
    Point o1;
    Point o2(11,22),o4(33,44);


    o1.display();
    Point o3 = o1;  // Copy Constructor invoked (here copy constructor is created by compiler)
    o3.display();

    o2.display();
    o4.display();

    o4 = o2;
    o4.display();



}

/*
#include<iostream>
using namespace std;

class Point{
    int a,b;
    public:
        Point() {}
        Point(int x, int y) {
            cout<<"Two Argument Constructor"<<endl;
            a = x;
            b = y;
        }

        Point(Point &obj){
            cout<<"Copy Constructor"<<endl;
            a = obj.a;
            b = obj.b;
        }

        void display(){
            cout<<"The value of x = "<<a<<" and value of y = "<<b<<endl;
        }

};

int main(){
    Point o1;
    o1.display();
    Point o3 = o1;
    o3.display();
}

*/