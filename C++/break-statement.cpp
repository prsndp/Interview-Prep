#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1; i<=n; i++)
	{
		if(n<0)
		{
			break;
		}
		sum+=i;
		cout << "sum: "<<sum<<"\n";
	}
	cout <<sum <<"\n";
return 0;
}

