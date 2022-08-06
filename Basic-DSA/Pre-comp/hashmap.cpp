#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<string, int>m;
	m["pgp"];
	m["deep"];
	m.insert({"course", 153});
	for(auto it: m)
	{
	 	cout << it.first<<" "<<it.second<<"\n";
	}
}
