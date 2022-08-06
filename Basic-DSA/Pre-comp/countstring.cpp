#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	 int cnt = 0;
     string a, b;
     cin >> b >> a;
     for(int i = 0; i<a.size(); i++)
     {
        for(int j = 0; j<b.size(); j++)
        {
            if(a[i] == b[j])
            {
                cnt++;
                break;
            }
        }
     }
     cout << cnt <<"\n";  
    }
	return 0;
}
