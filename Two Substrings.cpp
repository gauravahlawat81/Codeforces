#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int posA,posB;
	if(s.find("AB")==-1 or s.find("BA")==-1)
	{
		cout<<"NO\n";
		exit(0);
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='A' and s[i+1]=='B')
			{	posB=i+1;
				posA=i;
				break;
			}
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='B' and s[i+1]=='A' and i!=posB and (i+1)!=posA)
			{
				cout<<"YES\n";
				exit(0);
			}
		}
		cout<<"NO\n";
	}
	return 0;
}