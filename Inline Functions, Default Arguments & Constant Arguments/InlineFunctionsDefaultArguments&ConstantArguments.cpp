#include<iostream>
using namespace std;


// Inline function
inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}
// Default argument
float moneyReceived(int currentMoney, float factor=1.04,int c=8,int d=9){
// float moneyReceived(int currentMoney, float factor=1.04,int c=8,int d) // we can not define function like this 
// as after assigning a default value then all the argumets must be assigned with default value
    return currentMoney * factor + c + d;
}

// Constant argument
int strlen(const int p){
    // p = 4;
    return p+2;
}
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    // in this method call we can not modified the value that is origially passed.
    cout<<strlen(3)<<endl;
    int money = 100000;
    // cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1,5,7)<< " Rs after 1 year";
    return 0;
}
