#include<bits/stdc++.h>
using namespace std;

// const int n = 1e5+10;
 const int n = 1e7+10;
int hsh[n];
int main()
{
	// int n;
	// cin >> n;
	// int a[n];
	// for(int i = 0; i<n; i++)
	// {
	// 	cin >> a[i];
	// }

	// int q;
	// cin >> q;
	// while(q--)
	// {
	// 	int x;
	// 	cin >> x;
	// 	int cnt  = 0;
	// 	for(int i = 0; i<n; i++)
	// 	{
	// 		if(a[i] == x)
	// 		{
	// 			cnt++;
	// 		}
	// 	}
	// 	cout << cnt <<" ";
	// }

	// using hashing 
	
	int n;
	cin >> n;
	int a[n];
	for(int i  = 0; i<n; i++)
	{
		cin >> a[i];
		hsh[a[i]]++;
	}
	int q;
	cin >> q;
	while(q--)
	{
		int x;
		cin >> x;
		cout << hsh[x] <<" ";
	}

	return 0;
}
