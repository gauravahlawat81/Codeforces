#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	vector< pair<int,int> > vec;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		vec.emplace_back(make_pair(a,b));
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++)
	{
		if(vec[i].first<s)
		{
			s+=vec[i].second;
		}
		else
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;

}