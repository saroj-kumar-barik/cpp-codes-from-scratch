#include <iostream>
using namespace std;

class Shop
{
    int itemId[100]; // 100 * 4
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};


class exam{

   static int c;
    public:
     
    int a;
    int b;
    
    void test(){
        cout<<&c<<endl;
        cout<<&a<<"  "<<&b<<endl;

    };

    void check();
};

int exam::c;


void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}


int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    cout<<sizeof(exam)<<endl;

    exam obj1;
    exam obj2;

    obj1.test();
    obj2.test();



    return 0;
}
