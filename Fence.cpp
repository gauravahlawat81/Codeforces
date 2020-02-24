#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(auto &c:arr)
	{
		cin>>c;
	}
	int sum=INT_MAX,index=0;
	for(int i=0;i<=(n-k);i++)
	{
		int partial_sum=0;
		for(int j=i,m=0;m<k;j++,m++)
		{
			partial_sum+=arr[j];
		}
		if(partial_sum<sum)
		{
			sum=partial_sum;
			index=i;
		}
	}
	cout<<index+1<<"\n";
	return 0;
}