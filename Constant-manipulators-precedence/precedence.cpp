#include<iostream>
using namespace std;

int main(){

// Operator Precedence
 // a = 4, b = 7
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87); // -26 + 87 = 61
    cout<<c;
    //  3 + 4 + 3 + 4 + 5  = 19
    cout<< a++ + a-- + a++ + b++ + b++<<endl; // left to right
    //      5 + 5 + 6 + 4 + 3 = 23
    //     4 + 3 + 6 + 5 + 4  = 23 (as per rule fisrt calculate post then pre increment and decrements)
    cout<< ++a + a-- + b++ + a++ + --a<<endl; // left to right
    
    return 0;
}