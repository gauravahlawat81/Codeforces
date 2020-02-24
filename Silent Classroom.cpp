#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s[n];
	unordered_map<char,int>umap;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	int freq=INT_MIN;
	for(int i=0;i<n;i++)
	{
		//cout<<s[i][0];
		umap[s[i][0]]++;
		if(umap[s[i][0]]>freq)
		{
			freq=umap[s[i][0]];
		}
	}
	int arr[freq+1];
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;
	//cout<<3/2<<"\n";
	//cout<<3-3/2<<"\n";
	for(int i=3;i<=freq;i++)
	{
		int x=i-(i/2);
		arr[i]=arr[i/2]+arr[x];
		cout<<"arr["<<i<<"]"<<" is "<<arr[i]<<"\n";
	}
	cout<<arr[freq]<<"\n";
	return 0;
}
