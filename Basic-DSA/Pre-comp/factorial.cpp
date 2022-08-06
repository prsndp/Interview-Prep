#include<bits/stdc++.h>
using namespace std;

const int n = 1e5+10;
int main()
{
	int t;
	cin >> t;
	int arr[n];
	arr[0] = arr[1] =1;
	for(int i = 2; i<n; i++)
	{

		arr[i] = arr[i-1]*i;
	}

	while(t--)
	{
		int n;
		cin >> n;
		cout << arr[n]<<"\n";
	}
	return 0;
}
