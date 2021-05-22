#include<iostream>
using namespace std;

// This forward declartaion is req as we have used the parameter inside the calculator class before definig the 
// Class.(Not Sure will verify) 
class ComplexNumberCalculation;

class Calculator{
    public:
        int sumRealNumber(ComplexNumberCalculation,ComplexNumberCalculation);
        int sumComplexNumber(ComplexNumberCalculation,ComplexNumberCalculation);
};

class ComplexNumberCalculation{
    int a;
    int b;
    friend Calculator;
    public :
        void setData(int n1, int n2){
            a = n1;
            b = n2;
        }
};

int Calculator::sumRealNumber(ComplexNumberCalculation o1,ComplexNumberCalculation o2){
    // this method can access the private data members of class ComplexNumberCalculation
    return (o1.a+o2.a);
}

int Calculator::sumComplexNumber(ComplexNumberCalculation o1,ComplexNumberCalculation o2){
    return (o1.b+o2.b);
}


int main(){
    ComplexNumberCalculation o1,o2;

    o1.setData(11,22);
    o2.setData(33,44);

    Calculator c1;
    int resRealPart = c1.sumRealNumber(o1,o2);
    cout<<resRealPart;
    int resCompexPart = c1.sumComplexNumber(o1,o2);

    cout<<"the complex no. created after adding both the objects is = "<<resRealPart<<" + "<<resCompexPart<<"i";
}