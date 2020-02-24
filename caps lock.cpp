#include<bits/stdc++.h>
using namespace std;
bool all_upper(string s)
{
	bool flag=true;
	for(int i=0;i<s.length() and flag;i++)
	{
		if(isupper(s[i]))
		{
			flag=true;
		}
		else
		{
			flag=false;
		}
	}
	return flag;
}
bool first_lower(string s)
{
	bool flag=true;
	if(islower(s[0]))
	{
		flag=true;
	}
	else
	{
		return false;
	}
	for(int i=1;i<s.length() and flag ;i++)
	{
		if(isupper(s[i]))
		{
			continue;
		}
		else
		{
			flag=false;
		}
	}
	return flag;
}
int main()
{
	string s;
	cin>>s;
	bool flag= all_upper(s) or first_lower(s);
	for(int i=0;i<s.length() and flag;i++)
	{
		if(islower(s[i]))
			s[i]=toupper(s[i]);
		else
			s[i]=tolower(s[i]);
	}
	cout<<s<<endl;
	return 0;

}