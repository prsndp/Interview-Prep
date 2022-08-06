#include<iostream>
#include<string>
using namespace std;
// creating class
class house
{
   private:
	// member variables
	int length = 0, breath = 0;
	// memebr functions 
    public:
	void setData(int x, int y)
	{
		length = x;
		breath = y;
	}	
	// area calculating function
    // this is extra layer of security: 
	void area(){
	cout<<"Area of house: "<<" "<<length*breath<<"\n"; 
	}
};
int main()
{
	// creating object
	house gini;
	gini.setData(300, 500);
    gini.area();
return 0;
}
