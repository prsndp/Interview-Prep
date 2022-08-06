#include<iostream>
using namespace std;

class EqilateralTriangle 
{

private:
    float a;
    float c;
    float circumference;
    float area;
public: 
    void setA(float length)
    {
        a = length;
        circumference = a*3;
        area = (1.73*a*a)/4;
    }
    friend void PrintResults(EqilateralTriangle); // friend function
};

void PrintResults(EqilateralTriangle et )
{
    cout <<"circumference = " << et.circumference <<"\n";
    cout << "area = " <<et.area<<"\n";
}
int main()
{
    EqilateralTriangle et;
    et.setA(3);
    PrintResults(et);
}
