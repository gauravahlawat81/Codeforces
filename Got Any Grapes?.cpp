#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=x and ((a-x)+b)>=y and (a+b+c-x-y)>=z)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}