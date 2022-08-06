#include<bits/stdc++.h>
using namespace std;
int main()
{
	int numerator, denomiator;
	int result;
	cin >> numerator >> denomiator;
	try{
		if(denomiator == 0)
		{
			throw denomiator;
		}
			result = numerator/denomiator;
		}	
		catch(int ex){

			cout <<"Dividing by zero not allowd!"<<ex<<"\n";
		}
		cout <<"Result: "<<result<<"\n";
	

	
return 0;
}