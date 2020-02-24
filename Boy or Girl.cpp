#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	set<char> s1;
	for(auto c:s)
	{
		s1.insert(c);
	}
	if(s1.size()&1)
	{
		cout<<"IGNORE HIM!\n";
	}
	else
	{
		cout<<"CHAT WITH HER!\n";
	}
	return 0;
}