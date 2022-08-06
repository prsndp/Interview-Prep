#include<iostream>
using namespace std;

class base {
    public: 
        base()
        {
            cout<<"Default constructor of base class " <<"\n";
        }
        base(int b)
        {
            cout << "Para COnstructor of base class" <<b<<"\n";
        }

}; 
class derived : public base
{
    public: 
        derived()
        {
            cout << "Default Constructor of Derived class";

        }
        derived(int d) :  base(d)
        {
            cout << "Para Constructor of Derived Class"<< d <<"\n";
        }
};
int main()
{
    derived d(9);
    return 0;
}
