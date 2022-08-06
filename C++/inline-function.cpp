#include<iostream>
using namespace std;

inline int add(int a, int b)
	{
		return a+b;
	}
int main()
{
cout << "addition of a and b: "<<add(5, 5)<<"\n";
return 0;
}