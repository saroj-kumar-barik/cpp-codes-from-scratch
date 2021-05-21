#include <iostream>
using namespace std;

class Employee
{
    // by default scope of variable inside class is private
    int id;
    static int count;
    static void dis(); 

public:
    static void printing(){
        cout<<"printing line inside static method...";
    }

    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
        dis(); // way to access private member function

    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

void Employee::dis(){
    cout<<"private member"<<endl;
}

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    // rohan.setData();
    // rohan.getData();
    // Employee::getCount();

    // lovish.setData();
    // lovish.getData();
    // Employee::getCount();
    // Employee::dis(); // this will throw an error
    Employee::printing();


    return 0;
}
