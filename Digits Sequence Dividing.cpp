#include<bits/stdc++.h>
using namespace std;
int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(n==2 and s[0]>=s[1])
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n2\n"<<s[0]<<" "<<s.substr(1)<<endl;
		}
	}
	return 0;
}