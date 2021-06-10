#include<iostream>

using namespace std;

void display(){
    cout<<"Inside display"<<endl;
}
int display(int a){
    cout<<"Inside display"<<endl;
    return a*a;
}

int main(){
   void (*p)() = &display;   // syntax of function pointer 'returntype' pointer (). ex - void *p ()
   int (*q)(int) = &display; // syntax of function pointer 'returntype' pointer (). ex - int *q (int)
   display();
   cout<<display(2)<<endl;
   p();
   cout<<q(5)<<endl;
}