#include <iostream>
using namespace std;

int count=0;
class alpha
{
public:
	alpha()
	{
		count++;
		cout<<"\n no of object created"<<count;
	}

	~ alpha()
	{
		cout<<"\n no of object destroyed"<<count;
		count--;
	}
};
int main()
{
	cout<<"\n enter main";
	alpha A1,A2,A3,A4;
	{
		cout<<"\n Enter block";
		alpha A5;
	}

	{
		cout<<"\n Enter block";
		alpha A5;
	}
	cout<< "\n Re-enter main ";
	return 0;

}