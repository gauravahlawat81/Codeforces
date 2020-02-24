#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	
	for(int &a:v)
	{
		cin>>a;
	}
	string s;
	cin>>s;
	//cout<<s;
	long long int total=0;
	for(int i=0,j=0;i<n;i=j)
	{
		while(j<n and s[i]==s[j])
		{
			j++;
		}
		sort(v.begin()+i,v.begin()+j,greater<int>());
		//reverse(v.begin()+i,v.begin()+j);
		for(int m=i;m<min(j,i+k);m++)
		{
			total+=v[m];
		}
	}
	cout<<total<<endl;
	return 0;
}