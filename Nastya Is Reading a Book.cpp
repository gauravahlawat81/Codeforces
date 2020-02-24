#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v[i].first=a;
		v[i].second=b;
	}
	int k,count=0;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(v[i].second>=k)
		{
			count=n-i;
			break;
		}
	}
	cout<<count<<endl;

	return 0;
}
