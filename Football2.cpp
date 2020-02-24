#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1="1111111",s2="0000000";
	cin>>s;

	if(s.find(s1)!=-1 or s.find(s2)!=-1)
	{
		cout<<"YES\n";
	}

	else
	{
		cout<<"NO\n";
	}
	return 0;
}