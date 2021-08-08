#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char  name[50];
        int   eid;
    public:
        void getDetails(void);
        void putDetails(void);
};
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter your id: ";
    cin >> eid;   
}
 
void student::putDetails(void){
    cout << "Student employee:\n";
    cout << "Name:"<< name << ",your id:" << eid << 
 
int main()
{
    student std[MAX];     
    int n,i;
     
    cout << "Enter total number of employee: ";
    cin >> n;
     
    for(i=0;i< n; i++){
        cout << "Enter details of employee " << i+1 << ":\n";
        std[i].getDetails();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "Details of employee " << (i+1) << ":\n";
        std[i].putDetails();
    }
     
    return 0;
}