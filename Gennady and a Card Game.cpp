#include<bits/stdc++.h>
using namespace std;
int main()
{
	string source;
	cin>>source;
	string arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	bool flag=true;
	for(int i=0;i<5 and flag;i++)
	{
		if(arr[i][0]==source[0] or arr[i][1]==source[1])
		{
			cout<<"YES\n";
			flag=false;
		}
	}
	if(flag)
	{
		cout<<"NO\n";
	}
	return 0;
}