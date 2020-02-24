#include<bits/stdc++.h>
using namespace std;
int result=0;
string make(string s)
{
	//cout<<"ENtering in make\n";
	string ans="";
	for(int i=0;i<s.size();i+=2)
	{
		if(i==(s.size()-1))
		{
			ans+=s[i];
			break;
		}
		if(s[i]==s[i+1])
		{
			ans+=s[i];
			//cout<<s[i]<<" equals "<<s[i+1]<<"\n";
			result++;
			//cout<<"Value of result is "<<result<<"\n";
		}
		if(s[i]!=s[i+1])
		{
			//cout<<"NOt equals\n";
			//cout<<s[i]<<" "<<s[i+1]<<"\n";
			ans+=s[i];
			ans+=s[i+1];
		}
	}
	//cout<<"Value of ans is "<<ans<<"\n";
	if(ans.size()&1)
	{
		ans.erase(ans.end()-1);
		//cout<<"Length is odd\n";
		result++;
		//cout<<"New value of result "<<result<<"\n";
	}
	s=ans;
	//cout<<"Updated string is "<<s<<"\n";
	//cout<<"Exiting from make\n";
	return s;
}
bool check(string s)
{
	for(int i=0;i<s.size();i+=2)
	{
		if(s[i]==s[i+1])
		{
			return false;
		}
	}
	if(s.size()&1)
	{
		return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	string s,copy;
	cin>>s;
	copy=s;
	while(!check(s))
	{
		s=make(s);
	}
	int i=0,j=0,count=0;
	while(i<copy.size() and j<s.size())
	{
		if(copy[i]!=s[i])
		{
			count++;
		}
		i++;
		j++;
	}
	while(i<copy.size())
	{
		count++;
		i++;
	}
	cout<<result<<"\n"<<s<<"\n";
	return 0;
}