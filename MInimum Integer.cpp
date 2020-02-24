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
		for(int i=1;;i++)
		{
			if(i==l)
			{
				i=r+1;
			}
			if(i%d==0)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
}