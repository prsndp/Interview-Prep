#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	string revs;
	for(int i= s.size()-1; i>=0; --i)
	{
		revs.push_back(s[i]);
	}
	if(revs == s)
	{
		cout <<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
return 0;
}