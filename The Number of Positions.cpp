#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if( a<=(i-1) and (n-i)<=b)
		{
			count++;
		}
	}
	cout<<count<<endl;
}