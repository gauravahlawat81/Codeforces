#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int time=0,jokes=0;
	for(int i=0;i<n-1;i++)
	{
		time+=arr[i];
		time+=10;
		jokes+=2;
	}
	time+=arr[n-1];
	if(d==time)
	{
		cout<<jokes<<endl;
	}
	else if(d>time)
	{
		d=d-time;
		jokes+=(d/5);
		cout<<jokes<<endl;
	}
	else if(d<time)
	{
		cout<<"-1"<<endl;
	}
	return 0;

}