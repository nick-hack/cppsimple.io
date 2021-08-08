#include <iostream>
using namespace std;

class Base_Class
{
public:
    Base_Class()
    {
        cout << "Base_Class - No Parameters" << endl;
    }
    Base_Class(int x)
    {
        cout << "Base_Class - Parameters : " << x << endl;
    }
};

class Derived_Class:public Base_Class
{
public:
    Derived_Class()
    {
        cout << "Derived_Class - No Parameters" << endl;
    }
    Derived_Class(int y)
    {
        cout << "Derived_Class - Parameters : " << y << endl;
    }
    Derived_Class(int x,int y):Base_Class(x)
    {
        cout << "Param of Derived_Class : " << y << endl;
    }
};

int main()
{
    Derived_Class d(7,19);
}