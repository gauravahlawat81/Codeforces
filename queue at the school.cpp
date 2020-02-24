#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=1;i<=t;i++)
	{

		bool visited[n];
		for(int k=0;k<n;k++)
		{
			visited[k]=false;

		}
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='B' and s[j+1]=='G' and visited[j]==false)
			{
				swap(s[j+1],s[j]);
				j++;
				//visited[j]=true;
				//visited[j+1]=true;
				//cout<<"After "<<i<<" operation \t"<<s<<endl;
			}
		}
	}
	//cout<<"\n finally \n";
	cout<<s<<endl;
	return 0;
}