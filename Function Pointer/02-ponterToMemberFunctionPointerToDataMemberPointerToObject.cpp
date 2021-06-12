#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
    int c,d;
        void setdata(int, int);
        void display();

};
void ABC::display(){
    cout<<"C  = "<<c<<" and D = "<<d<<endl;
}
void ABC::setdata(int c, int d){
    ABC::c = c;
    ABC::d = d;
}
int main(){



    ABC X;

    // ponter to dataMember
    int ABC::* pmc = &ABC::c;  // creating an integer type pointer 'pma' that holdes address of c and
    int ABC::* pmd = &ABC::d;  // ABC:: indicate that the pointers are created under the scope of the class

    X.c = 11;
    X.*pmd = 22;

    cout<<"data of obejct X : "<<endl;
    cout<<&X.c<<endl;
    // cout<<pmc<<" "<<X.d<<endl;  why the value of pmc = (garbage)
    cout<<X.*pmc<<" "<<X.d<<endl;

    // reference
    // int *x = &X.c;

    // cout<<x<<endl;
    // cout<<&X.c<<endl;
    // cout<<*x;

    // pointer to member function 

    ABC Y;
    
    void (ABC::*pfs)(int, int) = &ABC::setdata;
    void (ABC::*pfd)() = &ABC::display;

    (Y.*pfs)(33,44);
    
    cout<<"data of obejct X : "<<endl;
    (Y.*pfd)();
    
    // Pointer to Object

    // When use arrow(->) : When object is of type pointer 
    // When use dot(.) : When object is Normal object 
    cout<<"data of obejct X : "<<endl;
    ABC *Z;
    Z = &X;

    Z->c = 55;
    Z->d = 66;
    (Z->*pfd)();
}

