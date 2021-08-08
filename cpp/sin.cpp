#include <iostream>

using namespace std;

class Base_Class
{
public:
    int i;
    void display()
    {
        cout << "Display of Base Class " << i << endl;
    }
   
};

class Derived_Class:public Base_Class
{
public:
    void show()
    {
        cout << "Show of Derived Class" << endl;
    }
};

int main()
{
    Derived_Class dc;
    dc.i = 100;
    dc.display();
    dc.show();

    return 0;
}