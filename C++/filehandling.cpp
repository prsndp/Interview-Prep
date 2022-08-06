#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char arr[100];


	cin.getline(arr, 100);

	ofstream myfile("xyz.txt"); //  calling a constructor
	
	myfile<<arr;
	myfile.close();
	cout <<"File Write Operation Done!"<<"\n";
	ifstream obj("xyz.txt");

	obj.get(arr, 100);
	cout <<"Readed Array content: "<<arr<<"\n";





}