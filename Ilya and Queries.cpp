#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int table[s.length()+1]={ };
	table[0]=0;
	for(int i=1;i<s.length();i++)
	{
		table[i]+=(s[i]==s[i-1])+table[i-1];
	}
	int t;
	cin>>t;
	while(t--)
	{
		int l,m;
		cin>>l>>m;
		cout<<table[m-1]-table[l-1]<<"\n";
	}
	return 0;
}