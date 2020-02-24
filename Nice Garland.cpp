#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int umap[1000];
	for(int i=1;i<n;i++)
	{
		umap['R']=0;
		umap['G']=0;
		umap['B']=0;
		if(i+1==n)
		{
			break;
		}
		if(s[i-1]!=s[i] and s[i+1]!=s[i] and s[i-1]!=s[i+1])
		{
			continue;
		}
		if(s[i-1]==s[i])
		{
			if(s[i-1]=='B')
		}

	}
}