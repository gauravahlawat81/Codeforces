#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,x,b,y;
	cin>>n>>a>>x>>b>>y;
	if(a==b)
	{
		cout<<"YES\n";
		exit(0);
	}
	else
	{
		for(int i=a,j=b;;)
		{
			if((i==x or j==y) and i!=j)
			{
				cout<<"NO\n";
				exit(0);
			}
			if((i==x or j==y) and i==j)
			{
				cout<<"YES\n";
				exit(0);
			}
			if(i==j)
			{
				cout<<"YES\n";
				exit(0);
			}
			else
			{
				i=(i<n)?i+1:1;
				j=(j>1)?j-1:n;
			}
		}
		cout<<"NO\n";
		exit(0);

	}
}