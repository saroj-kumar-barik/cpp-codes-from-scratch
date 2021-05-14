#include<iostream>
#include<string>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};



    string str = "bablu";
    cout<<str;
    cout<<&marks<<endl;
    cout<<sizeof(int*);


    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    // marks[2] = 455;
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // Quick quiz: do the same using while and do-while loops?
    int i =0;

    do{
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;

    }while (i<4);

    
    

    // Pointers and arrays 
    // we can not assign array to a pointer using address of operator(&) 
    // because array it self holds the addres of the first index
    // int* p = &marks -- > wrong
    // int* p = marks -- > correct
    // {23, 45, 56, 89};
    int* p = marks;
    cout<<*(p++)<<endl; // 23
    cout<<*(++p)<<endl; // 56
    cout<<"The value of *p is "<<*p<<endl; // 56
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl; // 89
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl; // garbage 
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; // garbage
    
    return 0;
}
