#include <iostream>

using namespace std;

class DemoAdd
{
	public:

        float addition(int a, float b)
        {
                float result;
                result = (float)a + b;
                return result;
        }

        float addition(float a, int b)

        {
                float result;
                result = a + (float)b;
                return result;
        }

};

int main()
{        

        DemoAdd d;
         int i1 = 10;
        float f1 = 10.5, res1, res2;

        res1 = d.addition(i1, f1); 

        res2 = d.addition(f1, i1); 

       
        cout << "Result = " << res1 << endl;

        cout << "Result = " << res2 << endl;

        return 0;

}