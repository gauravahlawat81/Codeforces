#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	bool flag=true;
	cin>>s;
	int count=0;

	for(int i=0;i<s.length() and flag!=false;i++)
	{
		for(int j=i,k=1;j<s.length() and k<=7;j++,k++)
		{
			if(s[j]==s[i])
			{
				count++;
			}
		}
		if(count==7)
		{
			cout<<"YES\n";
			flag=false;
		}
		else
		{
			count=0;
			continue;
		}
	}
	if(flag)
		cout<<"NO\n";
	return 0;
}
	