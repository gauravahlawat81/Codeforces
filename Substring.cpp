#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	vector<pair<int,int> > vp(m);
	for(int i=0;i<m;i++)
	{
		cin>>vp[i].first>>vp[i].second;
	}
	unordered_map<char,int>umap;
	for(int i=0;i<n;i++)
	{
		umap[s[i]]++;
	}
	int maximum=INT_MIN;
	for(auto i:umap)
	{
		maximum=max(maximum,i.second);
	}
	if(maximum==1)
	{
		cout<<"-1\n";
	}
	else
	{
		cout<<maximum<<"\n";
	}
	return 0;
}