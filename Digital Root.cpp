#include<iostream>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,x;
		cin>>k>>x;
		bool flag;
		x=(9*(k-1))+x;
		cout<<x<<endl;
	}
	return 0;
}