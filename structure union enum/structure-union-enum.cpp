#include<iostream>
using namespace std;


// memory is created for all the variables for an object
// struct employee
// {
//     /* data */
//     int eId; //4
//     char favChar; //1
//     float salary; //4
// };
// Another type of defination of structure,
// where for object crartion we only write - ep(e.g) objectName;
typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

// Only one variable can be assigned value at a time for an object other two will give garbage
// the last updated value will have correct result others have garbage
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    // inside enums we only keep constants

    // constats have indexes only if we print it
    // enum Meal{ breakfast, lunch, dinner};
    // Meal m1 = lunch;
    // cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 

    union money m1;
    m1.car = 'c';
    m1.rice = 34;
    m1.pounds = 34;
    cout<<m1.car;
    cout<<m1.rice;
    cout<<m1.pounds;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
