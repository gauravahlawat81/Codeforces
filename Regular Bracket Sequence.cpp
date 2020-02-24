#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	unsigned long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	unsigned long long int open=0,close=0;
	open+=a*2;
	open+=c;
	close+=c;
	close+=d*2;
	if(a==d and (c==0 or c!=a))
	{
		cout<<"1\n";
	}
	else
	{
		cout<<"0\n";
	}

	return 0;
}