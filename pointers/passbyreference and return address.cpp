/*#include<iostream>
using namespace std;

int& finding_largest_among_two(int &p, int &q);
int main(){
    int a,b;
    cout<<"Enter two numbers A & B : ";
    cin>>a>>b;
    int &res = finding_largest_among_two(a, b);
    if (*(&res) == a)
        cout<<"Largest num is A = "<<res<<endl;
    else
        cout<<"Largest num is B = "<<res<<endl;   
        
}
                            //  1000     2000 
int &finding_largest_among_two(int &p, int &q){
    if(*(&p) > *(&q))
        return p;
    else
        return q;
}*/

#include<iostream>
using namespace std;

int& finding_largest_among_two(int &p, int &q);
int main(){
    int a,b,c = -1;
    cout<<"Enter two numbers A & B : ";
    cin>>a>>b;
    finding_largest_among_two(a, b) = c;
    if (c == a)
        cout<<"Largest num is A = "<<a<<endl;
    else
        cout<<"Largest num is B = "<<b<<endl;   
        
}
                            //  1000     2000 
int &finding_largest_among_two(int &p, int &q){
    if(p > q)
        return p;
    else
        return q;
}
