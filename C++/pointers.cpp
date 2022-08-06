#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v;
	cin >>v;

	// datatypes *pointers name;
	int *ip;
	double *dp;
	float *fp;
	char *ch;

	ip=&v;

	cout << "Original Variable value: "<<v<<"\n";
	cout <<"Address of varibale: "<<ip <<" "<<v<<"\n";
	cout <<"Pointer pointing to value: "<<*ip<<"\n";
	*ip = 6;
	cout << "Original Variable value: "<<v<<"\n";
	cout <<"Address of varibale: "<<ip <<" "<<v<<"\n";
	cout <<"Pointer pointing to value: "<<*ip<<"\n";



return 0;
}