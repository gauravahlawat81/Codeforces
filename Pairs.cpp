#include<bits/stdc++.h>
using namespace std;
bool check(vector<pair<int,int> >&v,int x,int y,int index)
{
	int size=v.size();
	for(int i=index;i<size;i++)
	{
		if(v[i].first==x or v[i].second==x or v[i].first==y or v[i].second==y)
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int,int> >v(m);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[i].first=a;
		v[i].second=b;
	}
	if(check(v,v[0].first,v[0].second,0))
	{
		cout<<"YES\n";
		exit(0);
	}
	for(auto x:{v[0].first,v[0].second})
	{
		for(int i=1;i<m;i++)
		{
			if(v[i].first!=x and v[i].second!=x)
			{
				if((check(v,x,v[i].first,i)) or (check(v,x,v[i].second,i)))
				{
					cout<<"YES\n";
					exit(0);
				}
				else
				{
					break;
				}
			}
		}
	}
	cout<<"NO\n";
	return 0;

}