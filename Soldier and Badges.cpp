#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int final=(n*(n+1))/2;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[i-1])
		{
			v[i]+=1;
			count++;
		}
	}
	for(auto c:v)
	{
		cout<<c<<" "<<endl;
	}
	cout<<endl<<count<<endl;

}