#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll n;
	cin>>n;
	vector<int> v;
	v.resize(n);
	ll sum=0;
	for(auto &c:v)
	{
		cin>>c;
		sum+=c;
	}
	sort(v.begin(),v.end(),greater<int>());
	vector<int> v1;
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		
		int x;
		cin>>x;
	
		cout<<sum-v[x-1]<<"\n";
	}


	return 0;
}