#include <iostream>
 
using namespace std;
 
class Number
{
private:
    int a;
public:
    void getNum(int x);
     friend void printNum(Number NUM);
 
     
};
 
void Number::getNum(int x)
{
    a=x;
}
 

void printNum(Number NUM)
{
    cout << "Value of a (private data member of class Number): " << NUM.a;
 
}
 
int main()
{
    Number nObj; 
    nObj.getNum(1000);
    printNum(nObj);
    return 0;
}
