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
    // Person()  // constructor
    // {
    //     name = "NULL";
    //     age = 0;
    //     height = 0.0f;
    // }
    // parametrized constructor
    Person(string name_a = "NULL",int age_a = 0, float height_a=0.0f )
    {
        name = name_a;
        age = age_a;
        height = height_a;
    }
    // copycontructor
    Person(Person &obj2)
    {
        name = obj2.name;
        age = obj2.age;
        height = obj2.height;
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
    Person obj, obj2("Prasandeep", 24, 5.6f), obj3(obj2);
    
   
    obj.getData();
    obj2.getData();
     cout<<"Object 3: Copy contructor"<<"\n";
    obj3.getData();
return 0;
}