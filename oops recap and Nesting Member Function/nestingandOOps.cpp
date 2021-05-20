#include<iostream>
#include<string>

using namespace std;

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

class NestingMemberFunction{
    private:
        string s;
        void check_binary();

    public:
        string result;
        void read();
        string ones_complement();
        void display();

};

void NestingMemberFunction::read(){
    cout<<"Enter a string to find its ones complement : "<<endl;
    cin>>s;
}


void NestingMemberFunction::check_binary(){
    for(int i = 0; i< s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!= '1'){
            cout<<"The number is not binary ! Invalid input format";
            exit(0);
        }
    }
   
}

string NestingMemberFunction::ones_complement(){
    // nesting member function 
    check_binary();
    for(int i =0; i < s.length();i++){
        if(s.at(i)== '0')
            s.at(i) = '1';
        else 
            s.at(i) = '0';    
    }

    return s;
}

void NestingMemberFunction::display(){
    read();
    result = ones_complement();
}

int main(){
    NestingMemberFunction obj;

    obj.display();
    cout<<"ones complenent of the enterd number is = "<<obj.result;

    return 0;
}
