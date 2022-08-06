#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	cin >> year;

	if(year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				cout <<"Leep Year" <<"\n";
			}
		}
		else{
			cout << "Leap Year"<<"\n";
		}
	}
	else{
		cout <<"Not Leap Year" <<"\n";
	}

return 0;
}