#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c,d=0,e=0,f=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		d+=a;
		e+=b;
		f+=c;

	}
	if(d==0 and e==0 and f==0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}