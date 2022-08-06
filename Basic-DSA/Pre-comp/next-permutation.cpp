#include<bits/stdc++.h>
using namespace std;

bool Sorted(int a[], int n)
{
	if(n == 1 or n == 0)
	{
		return true;
	}
	for(int i = 1; i<n; i++)
	{
		if(a[i-1]>a[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i<n; i++)
	{
		cin >> a[i];

	}
	Sorted(a, n);
	// check if it is sorted or not 
	if(!Sorted)
	{
		sort(a, a+n);
	}
	// else
	// {
	// 	for(int i = 1; i<n; i++)
	// 	{
	// 		for(int j = i+1; i<n; i++)
	// 		{
	// 			swap(a[i], a[j]);
	// 		}
	// 	}
	// }

	for(int i = 0; i<n; i++)
	{
		cout <<  a[i] <<" ";   
	}
	cout <<"\n";

	return 0;
}