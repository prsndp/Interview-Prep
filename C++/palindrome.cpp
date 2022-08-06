#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int digit, res = 0;
	int temp = n;
	while(n!=0)
	{
		digit = n%10;
		cout << "digit: "<<digit<<"\n";
		res = res*10+digit;
		cout << "res: " <<res<<"\n";

		n = n/10;
		cout <<"N: " <<n<<"\n";
	}
	if(res == temp)
	{
		cout << "Palindrome" <<"\n";
	}
	else{
		cout <<"Not Palindrome"<<"\n";
	}
return 0;
}