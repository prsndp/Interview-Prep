#include<iostream>
using namespace std;
int main()
{
	int size;
	int *ptr;
	cout<<"Enter the size: ";
	cin >> size;

	ptr = new int[size];
	cout <<"Enter the value to store in array: ";
	for(int i = 0; i<size; i++)
	{
		cin >> ptr[i];	
	}
	for(int i = 0; i<size; i++)
	{
		cout <<ptr[i]<<" ";
	}
	cout <<"\n";

return 0;
}