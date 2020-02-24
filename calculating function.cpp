#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,y;
	cin>>n>>k;
	map<int,int> mp;
	vector<int> arr;
	arr.resize(n);
	int friends[n];
	for(int i=0;i<n;i++) 
		friends[i]=0;
	for(int i=0;i<n;i++)
		{cin>>arr[i];mp[arr[i]]++;}
	auto j=mp.begin();
	j++;
   for (auto i = mp.begin(); j != mp.end(); i++,j++) 
			j->second+=i->second; 
  

	for (auto i : mp) 
        cout << i.first << "   " << i.second  
             << endl; 
	while(k--)
		{
			cin>>x>>y;
			if(arr[x-1]<arr[y-1])
				friends[y-1]++;
			else if(arr[y-1]<arr[x-1])
				friends[x-1]++;
		}
	int test=0;	
	for(int i=0;i<n;i++)
		{
			if(mp[arr[i]]>friends[i])
				cout<<mp[arr[i]]-friends[i]<<" ";
			else
				cout<<0<<" ";
}
}