#include<bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> V,B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,val;
		cin>>n;
		ll A[n];
		for(int i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		val = A[n-1]-A[0];
		int i=0,j=n-1;
		while(true)
		{
			if(A[j]%k == 0)
			{
				if(abs())
			}
		}
	}

	return 0;
}