#include<iostream>
#include<string>
using namespace std;

class mobile {
    private:
        string name;
        int RAM;
        string processor;
        int battery;
    public:
        mobile(string name_a ="NULL", int RAM_a=0, string processor_a="NULL", int battery_a=0)
        {
            name = name_a;
            RAM = RAM_a;
            processor = processor_a;
            battery = battery_a;
        }
        mobile(mobile &mob)
        {
            name = mob.name;
            RAM = mob.RAM;
            processor = mob.processor;
            battery = mob.battery;
        }
        void getMobileData();
};

// body of getter function outside the class
void mobile::getMobileData()
{
    cout<<endl<<"Name"<<name;
    cout<<endl<<"RAM"<<RAM;
    cout<<endl<<"Processor"<<processor;
    cout<<endl<<"Battery"<<battery;

}

int main()
{
    mobile doko;
    mobile doko2("Doko123", 4, "Snapdragon", 4000);
    mobile doko3(doko2);

    doko.getMobileData();
    doko2.getMobileData();
    doko3.getMobileData();
    
    return 0;
}