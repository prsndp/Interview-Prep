#include<iostream>
using namespace std;

class parent    /// Abtract Class
{
    public:
        virtual void show() = 0;
      
};
class boy: public parent 
{
    public:
        void show()
        {
            cout << "Brow Bun"<<"\n";
        }
};
class girl : public parent{
    public: 
        void show()
        {
            cout <<"Pink Bun"<<"\n";
        }
};

int main()
{
    parent *ptr;
    ptr = new boy();
    ptr->show();
    ptr = new girl();
    ptr->show();


    return 0;
}