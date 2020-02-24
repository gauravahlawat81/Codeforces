#include<bits/stdc++.h>
using namespace std;
int main()
{
	string given="HQ9+";
	string input;
	bool flag=true;
	cin>>input;
	for(int i=0;i<input.length() and flag;i++)
	{
		if(input[i]=='H'||input[i]=='Q'|| input[i]=='9')
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