#include<iostream>
using namespace std;


int add(int a, int b)
{
	cout <<"Function 1"<<"\n";
	return a+b;
}
double add(double a, double b)
{
	cout <<"Function 2"<<"\n";
	return a+b;

}

int add(int a, int b, int c)
{
	cout <<"Function 3"<<"\n";
	return a+b+c;
}
double add(int a, double b)
{
	cout <<"Function 4"<<"\n";
	return a+b;
}
double add(double a, int b)
{
	cout <<"Function 5"<<"\n";
	return a+b;
}

int main()
{
	cout << add(1,2);
	cout << add(5.5 ,4.5);
	cout << add(3, 5, 4);
	cout << add(3, 5.6);
	cout << add(3.5, 2);
	
	return 0;
}