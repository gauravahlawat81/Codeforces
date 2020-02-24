#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	int m1;
	cin>>m1;
	int arr2[m1];
	for(int i=0;i<m1;i++)
	{
		cin>>arr2[i];
	}
	set<int> s1;
	for(auto c:arr)
	{
		s1.insert(c);
	}
	for(auto c:arr2)
	{
		s1.insert(c);
	}
	if(s1.size()==n)
	{
		cout<<"I become the guy.\n";

	}
	else
	{
		cout<<"Oh, my keyboard!\n";
	}
}