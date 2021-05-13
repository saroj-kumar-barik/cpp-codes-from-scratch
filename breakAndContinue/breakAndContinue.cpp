#include<iostream>
using namespace std;

int main(){
    // Inside a loop or switch case
    cout<<"break";
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            break;
        }
        cout<<i<<endl;
    }

    cout<<endl;
    cout<<"continue"<<endl;
    cout<<endl;
    //  *
    //  **
    //  ***
    //  ****
    //  *****
    

    // Inside loop only
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            // continue takes the control to starting of loop
            // only used inside loop
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}
