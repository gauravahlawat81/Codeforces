#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r,d;
		cin>>l>>r>>d;
		if(d<l or d >r)
		{
			cout<<d<<"\n";
		}
		else
		{
			int c=floor(r/d);
			cout<<d*(c+1)<<"\n";
		}
	}
	return 0;
}