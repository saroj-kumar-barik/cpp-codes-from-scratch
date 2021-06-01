#include<iostream>
using namespace std;

int* finding_largest_among_two(int* p, int* q);
int main(){
    int a = 18,b= 15;
    int* res = finding_largest_among_two(&a, &b);
    cout<<"Largest num is "<<*res<<endl;
        
}

int *finding_largest_among_two(int* p, int* q){
    if(*p > *q)
        return p;
    else
        return q;
}
