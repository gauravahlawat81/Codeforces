#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int> >v;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.emplace_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++)
	{
		if(v[i].first<v[i+1].first and v[i].second>v[i+1].second)
		{
			cout<<"Happy Alex\n";
			return 0;
		}
	}
	cout<<"Poor Alex\n";
	return 0;

}