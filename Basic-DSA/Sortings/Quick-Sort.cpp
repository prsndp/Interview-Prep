#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int partition(int a[], int l , int h)
{
	int pivot = a[l];
	int i= l, j = h;
	do{
		do{i++;} while(a[i]<=pivot);
		do{j--;} while(a[j]>pivot);
		
		if(i<j) swap(&a[i], &a[j]);
	}
	while(i<j);
	swap(&a[l], &a[j]);
	return j;
}

void QuikSort(int a[], int l, int h)
{
	int j;
	if(l<h)
	{
		j = partition(a, l, h);
		QuikSort(a, l, j);
		QuikSort(a, j+1, h);
	}
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
	QuikSort(a,0, n);
	for(int i = 0; i<n; i++)
	{
		cout << a[i] << " ";
		
	}
	cout <<"\n";
}
