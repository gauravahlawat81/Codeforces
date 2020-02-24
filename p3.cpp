#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		long double val1,val2;
		cin>>n;
		val1 = ceil(log(n)/log(2));
		if(pow(2,val1)-n == 0)
			val2 = val1;
		else
		{
			val2 = n-pow(2,val1-1)+1;
			val2 = ceil(log(val2)/log(2));
		}
		cout<<val2+val1<<"\n";
	}

	return 0;
}