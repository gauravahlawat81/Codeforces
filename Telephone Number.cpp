#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s,answer="";
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='8')
			{
				answer=s.substr(i);
				break;
			}
		}
		//cout<<"String answer is "<<answer<<"\n";
		if(answer.size()>=11)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
}