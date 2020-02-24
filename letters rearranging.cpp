#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{	
		string s;
		cin>>s;
		string s2=s;
		string s3=s;
		bool flag=true;
		reverse(s.begin(),s.end());
		if(s!=s2)
		{
			cout<<s<<endl;
			flag=false;
		}
		sort(s2.begin(),s2.end());
		
		//cout<<s;
		if(s3==s2 and flag)
		{
			cout<<"-1\n";
		}
		else if(flag)
		{
			cout<<s2<<endl;
		}
	}
}