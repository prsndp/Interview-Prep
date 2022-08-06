#include<iostream>
using namespace std;


int binarySearch(int a[], int n, int data)
{
	int low = 0, high = n-1;
	while(low<=high)
	{
		int mid = low+(high-low)/2; // to avoid overflow
		if(a[mid] == data)
		{
			return mid;
		}
		else if(a[mid]<data)
		{
			low = mid+1;
		}
		else high = mid-1;
	}
	return -1;
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
	int data;
	cin >> data;
	cout<<binarySearch(a, n, data)<<"\n";
		
	return 0;
}
