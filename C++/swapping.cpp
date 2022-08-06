// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int a, b;
// 	cin >> a >> b;
// 	cout <<"Before swapping: ";
// 	cout << a <<" "<<b <<"\n";

// 	cout <<"After swapping: ";
// 	int tmp = a;
// 	a = b;
// 	b = tmp;
// 	cout <<a <<" "<<b <<"\n";

// 	return 0;
// }


// Without using third variable 


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout <<"Before swapping: ";
	cout << a <<" "<<b <<"\n";

	cout <<"After swapping: ";
	 a = a+b;
	 b = a-b;
	 a = a -b;

	cout <<a <<" "<<b <<"\n";

	return 0;
}