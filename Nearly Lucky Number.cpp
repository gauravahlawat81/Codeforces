#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
bool lucky_number(ll n)
{
	bool flag=true;
	while(n && flag)
	{
		ll x=n%10;
		if(x==4 || x==7)
		{
			n/=10;
		}
		else
		{
			return false;
		}
	}
	return flag;
}
ll lucky_count(ll n)
{
	ll count=0;
	while(n)
	{
		ll x=n%10;
		if(x==4 || x==7)
		{
			count++;

		}
		n/=10;
	}
	return count;
}
int main()
{
	ll n;
	cin>>n;
	ll count=lucky_count(n);
	if(count==0 or lucky_number(count)==false)
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
	}
	return 0;
}