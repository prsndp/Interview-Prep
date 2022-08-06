#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
        string name;
        int age;
        float height;
public:
    Person()  // constructor
    {
        name = "NULL";
        age = 0;
        height = 0.0f;
    }
    // getter function
    void getData()
    {
        cout <<endl<< "Name: "<<name;
        cout <<endl<< "Age: "<<age;
        cout <<endl << "Hegiht: "<<height;
        cout <<endl;
    }

};
 
int main()
{
    Person obj;
    obj.getData();
return 0;
}