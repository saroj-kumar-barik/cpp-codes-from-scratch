#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        ABC(int, int);
        // ABC(ABC &);
        void display();
};

ABC::ABC(int a, int b){
    ABC::a = a;
    ABC::b = b;
}

// ABC::ABC(ABC &X){
//     cout<<"Copy Constructor "<<endl;
//     a = X.a;
//     b = X.b;
// }

void ABC::display(){
    cout<<"A = "<<a<<" B= "<<b<<endl;
}
int main(){
    // ABC X = ABC(11,22); // explit call - getting erro in explicit call(ans dont know)
    ABC X(11,22); // Implicit call

    ABC Y = X; // 

    X.display();
    Y.display();
}