#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	bool t=false;
	string s1="hello";
	int j=0;

	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s1[j])
		{
			j++;
		}

		if(j==5)
		{
			cout<<"YES\n";
			t=true;
			break;
		}

	}
	if(t==false)
	{
		cout<<"NO\n";
	}
	return 0;
}