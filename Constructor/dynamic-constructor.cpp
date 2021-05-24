#include<iostream>
using namespace std;


// Dynamic Object initialization using constructor
class Calculation{
    int p,r,t;
    float returnVal,R;

    public:
        Calculation() {}
        Calculation(int p,int t, int r);
        Calculation(int p,int t, float R);
};

Calculation::Calculation(int p, int t, int r){
    cout<<"Integer Constru"<<endl;
    // returnVal = p;
    returnVal = p + ((p * t * r)/100);
    cout<<returnVal<<endl;
}
Calculation::Calculation(int p, int t, float R){
    cout<<"Float Constru"<<endl;
    // returnVal = p;
    returnVal = p + ((p * t * R)/100);
    cout<<returnVal<<endl;
}

int main(){
    Calculation c1,c2;

    int p,r,t;
    float R;

    cout<<"enter value of p, t, r : ";
    cin>>p>>t>>r;
    c1 = Calculation(p,t,r);


    cout<<"enter value of p, t, r : ";
    cin>>p>>t>>R;
    c1 = Calculation(p,t,R);

}