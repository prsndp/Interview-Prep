#include<iostream>
using namespace std;

class base 
{
    public: 
        void Msg()
        {
            cout << "It is a base class"<<"\n";
        }

};
class derived: public base
{
    public: 
     void Msg()
     {
        cout <<"It is a derived class"<<"\n";
        base :: Msg();
     }
};

int main()
{
    derived d;

    d.Msg();
return 0;
}