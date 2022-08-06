#include<iostream>
#include<string>
using namespace std;

class person
{
    private:
        int weight;
    public:
        person(int w = 0)
        {
            weight = w;
        }
        void PrintWegiht()
        {
            cout<<"Weight is: "<<weight<<"\n";
        }
        void operator++()
        {
            ++weight;
        }
        // for post increament
        void operator++(int)
        {
            weight++;
        }
};

int main()
{

    person Jon(78);
    ++Jon;
    Jon++;
    Jon.PrintWegiht();
return 0;
}