#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string s,s1;
	cin>>s;
	cin>>s1;

	for(int i=0;i<s.length();i++)
	{
		s[i]=toupper(s[i]);
	}


	for(int i=0;i<s1.length();i++)
	{
		s1[i]=toupper(s1[i]);
	}
	int count=0;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]==s[i])
			count++;
		else if(s[i]>s1[i])
		{
			cout<<"1\n";
			break;
		}
		else if(s1[i]>s[i])
		{
			cout<<"-1\n";
			break;
		}
	}
	if(count==s1.length())
	{
		cout<<"0\n";
		
	}


	return 0;
}