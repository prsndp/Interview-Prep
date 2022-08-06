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
    // parametrized constructor
    Person(string name_a,int age_a, float height_a )
    {
        name = name_a;
        age = age_a;
        height = height_a;
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
    Person obj, obj2("Prasandeep", 24, 5.6f);
    obj2.getData();
    obj.getData();
return 0;
}